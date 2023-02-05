#ifndef TRAININGSESSION_H
#define TRAININGSESSION_H

#include <vector>
#include <string>
#include "HeartRate.h"

class TrainingSession {
public:
    TrainingSession();
    TrainingSession(std::string filename,
                    bool gender, 
                    unsigned int weight,
                    unsigned int height,
                    unsigned int VO2Max,
                    unsigned int age);
    
    void readData(std::string filename);

    double calcCalorieBurnNet();
    double calcCalorieBurnGross();
    double calcBMR();
    double totalTime();

private:
    std::vector<HeartRate> _hr;
    bool _gender;
    unsigned int _weight, _height, _VO2Max, _age, _hrAvg;
};

#endif // TRAININGSESSION_H