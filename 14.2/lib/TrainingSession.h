#ifndef TRAININGSESSION_H
#define TRAININGSESSION_H

#include <vector>
#include <string>
#include <iostream>
#include "HeartRate.h"

class TrainingSession {
public:
    explicit TrainingSession();
    explicit TrainingSession(std::string& filename,
                             bool gender, 
                             unsigned int weight,
                             unsigned int height,
                             unsigned int VO2Max,
                             unsigned int age,
                             std::ostream& msgPipe);
    
    void readData(std::string& filename);

    double calcCalorieBurnNet() const;
    double calcCalorieBurnGross() const;
    double calcBMR() const;
    double totalTime() const;

private:
    std::vector<HeartRate> _hr;
    bool _gender;
    unsigned int _weight, _height, _VO2Max, _age, _hrAvg;
    std::ostream& _msgPipe;
};

#endif // TRAININGSESSION_H