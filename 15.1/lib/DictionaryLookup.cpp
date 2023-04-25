#include "DictionaryLookup.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;


bool importFromFile(unordered_set<string>& dict, const string& fileName){
    //Try to open file, return true if file not found
    ifstream file(fileName);
    if (!file.is_open()){
        return true;
    }

    //Import one line at a time from the file
    string line;
    while (getline(file, line)){
        //Insert all but the last character (newline)
        dict.insert(line.substr(0, line.length() - 1));
    }
    file.close();

    return false;
}

bool isWordValid(unordered_set<string>& dict, const string& word){
    if (dict.find(word) != dict.end()){
        return true;
    }
    return false;
}

//Check string and all substrings for valid words from dictionary
string isAnyValid(unordered_set<string>& dict, string& input)
{
    string allWords = "";

    //Check if any substrings are valid, try all start positions using nested for loop
    for(int i = 0; i < input.length(); i++){
        for(int j = i; j <= input.length(); j++){
            string toCheck = input.substr(i, j);

            //Check if substring is valid and not already in allWords
            if (isWordValid(dict, toCheck) && 
                (allWords.find((" " + toCheck + ",")) == string::npos)
               ){
                allWords += input.substr(i, j) + ", ";
            }
        }
    }

    if(allWords == ""){
        allWords = "[No valid word found]";
    }
    else{
        //Ignore the last ", "
        allWords = (allWords.substr(0, allWords.length() - 2)) + "\n";
    }
    return allWords;
}
