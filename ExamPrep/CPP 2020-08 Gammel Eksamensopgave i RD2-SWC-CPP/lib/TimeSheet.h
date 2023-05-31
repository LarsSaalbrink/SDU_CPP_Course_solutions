#ifndef TIMESHEET_H 
#define TIMESHEET_H 
 
#include "TimeAndMaterials.h" 
#include <vector> 
 
class TimeSheet { 
public: 
    TimeSheet(); 
 
    virtual ~TimeSheet(); 
 
    void addTimeAndMaterial(TimeAndMaterials* tm); 
    void sortByType(); 

    friend std::ostream& operator <<(std::ostream& output, const TimeSheet& rhs); 

private: 
    std::vector<TimeAndMaterials*> mItems; 
}; 
 
#endif // TIMESHEET_H