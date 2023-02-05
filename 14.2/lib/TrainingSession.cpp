#include "TrainingSession.h"
#include <iostream>
#include <fstream>
#include <sstream>

TrainingSession::TrainingSession(){
    _hr = std::vector<HeartRate>();
}
TrainingSession::TrainingSession(std::string filename,
                                 bool gender, 
                                 unsigned int weight,
                                 unsigned int height,
                                 unsigned int VO2Max,
                                 unsigned int age){
    _hr = std::vector<HeartRate>();
    _gender = gender;
    _weight = weight;
    _height = height;
    _VO2Max = VO2Max;
    _age = age;
    TrainingSession::readData(filename);
    
    //Calculate average heart rate
    int sum = 0;
    for(int i = 0; i < _hr.size(); i++){
        sum += _hr[i].getHeartRate();
    }
    _hrAvg = sum / _hr.size();
}

void TrainingSession::readData(std::string filename){
    //If file is available, read data
    std::ifstream file(filename);
    if(file.is_open()){
        std::string line;
        std::getline(file, line);  //Skip first line

        while(std::getline(file, line)){  //Read data
            //Split line into tokens, using only the first 2 tokens
            std::stringstream ss(line);
            std::string token;
            std::vector<std::string> tokens;
            int i = 0;
            while(std::getline(ss, token, ',') && (i < 2)){
                tokens.push_back(token);
                i++;
            }

            //Convert the hours:minutes:seconds in first token to seconds
            int seconds = std::stoi(tokens[0].substr(0, 2)) * 3600 +
                          std::stoi(tokens[0].substr(3, 5)) * 60 +
                          std::stoi(tokens[0].substr(6, 8));

            //Create HeartRate object & add it to vector
            HeartRate hr(std::stoi(tokens[1]), seconds);
            _hr.push_back(hr);
        }
        file.close();  //Close file
    }
    else{
        std::cout << "File not found" << std::endl;
    }
}

double TrainingSession::calcCalorieBurnNet(){
    return (calcCalorieBurnGross() - ((calcBMR()*totalTime())/24));
}

double TrainingSession::calcCalorieBurnGross(){
    //Total time in seconds is the time of the last heart rate reading
    int fullTime = _hr[_hr.size()-1].getTime();

    //Magic numbers & formula provided by assignment description
    if(_gender){
        return (((((-95.7735) + (0.634*_hrAvg) + (0.404*_VO2Max) + (0.394*_weight) + (0.271*_age))
                  /4.184)*fullTime)/60); //Male
    }
    else{
        return (((((-59.3954) + (0.45*_hrAvg) + (0.38*_VO2Max) + (0.103*_weight) + (0.274*_age))
                  /4.184)*fullTime)/60); //Female
    }
}

double TrainingSession::calcBMR(){
    if(_gender){
        return ((10.0 * _weight) + ((6.25 * _height) - (5.0 * _age)) + 5.0);  //Male
    }
    else{
        return ((10.0 * _weight) + ((6.25 * _height) - (5.0 * _age)) - 161.0);  //Female
    }
}

double TrainingSession::totalTime(){
    //Total time in seconds is the time of the last heart rate reading
    return ((_hr[_hr.size()-1].getTime()) / 3600.0);
}

