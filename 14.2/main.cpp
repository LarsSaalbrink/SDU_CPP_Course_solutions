//
//  Expected results with given data (default arguments):
//  Calories burned (gross):  1109.71
//  Calories burned (net):    1030.86
//



#include <iostream>
#include "TrainingSession.h"

//Function for processing arguments
void readArgs(int& argc, 
              char* argv[], 
              std::string& fileName, 
              bool& gender, 
              unsigned int& weight, 
              unsigned int& height, 
              unsigned int& VO2Max, 
              unsigned int& age){
    //If no arguments are given, use default files
    if(argc != 7){
        std::cout << "Incorrect arguments given, \nusing default file \"hrdata.csv\" and "; 
        std::cout << "personal details: Male, 90kg, 185cm, VO2Max 48, Age 34 instead" << std::endl;
        fileName = "hrdata.csv";
        gender = true;
        weight = 90;
        height = 185;
        VO2Max = 48;
        age = 34;
        std::cout << "Usage: filename.txt M/F weight height VO2Max age" << std::endl;
    }
    else{
        fileName = argv[1];
        std::cout << "Using file: " << fileName << std::endl;
        gender = ((argv[2][0] == 'M') ? true : false);
        weight = std::stoi(argv[3]);
        height = std::stoi(argv[4]);
        VO2Max = std::stoi(argv[5]);
        age = std::stoi(argv[6]);
        std::cout << (gender ? "Male" : "Female") << ", " 
                  << weight << "kg, " 
                  << height << "cm, " 
                  << "VO2Max " << VO2Max << ", " 
                  << "Age " << age << std::endl;
    }
}

int main(int argc, char* argv[]){
    //Set decimal precision to 2
    std::cout << std::cout.precision(2) << std::fixed << "\b";

    //Read file name and person info from arguments
    std::string fileName;
    bool gender;
    unsigned int weight, height, VO2Max, age;
    readArgs(argc, argv, fileName, gender, weight, height, VO2Max, age);

    //Create TrainingSession object
    TrainingSession ts(fileName, gender, weight, height, VO2Max, age);

    //Calculate and print results
    std::cout << "\nTotal time: " << ts.totalTime() << " hours\n";
    std::cout << "Calories burned (gross): " << ts.calcCalorieBurnGross();
    std::cout << "\nCalories burned (net): " << ts.calcCalorieBurnNet() << std::endl;

    return 0;
}
