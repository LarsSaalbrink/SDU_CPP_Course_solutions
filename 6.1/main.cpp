#include <iostream>
#include <iomanip>
#include <Safety.h>
#include <UI.h>
#include <Date.h>
#include <string>
#include <climits>

void programDone(){
    std::cout << "Thank you for using the program!\n";
}

void getDateInput(Date &weekdayFinder){
    int year, month, day;
    std::cout << "Please use 1-indexing\n";
    std::cout << "Enter year: ";
    getWithinLimits<int>(year, 0, INT_MAX);
    std::cout << "Enter month: ";
    getWithinLimits<int>(month, 1, 12);
    std::cout << "Enter day: ";
    getWithinLimits<int>(day, 1, 31);

    weekdayFinder.setYear(year);
    weekdayFinder.setMonth(month);
    weekdayFinder.setDay(day);
}

int main(){
    Date weekdayFinder = Date();
    
    while(1){
        Options currentChoice = choice2("\nDetermine weekday of date or exit? (D/E): ", 'D', 'E');
        if(currentChoice == option1){
            //Option 'D' selected
            getDateInput(weekdayFinder);

            int weekday = weekdayFinder.getDayOfWeek();
            std::string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
            std::cout << "Weekday: " << weekday << " (" << weekdays[weekday] << ") \n";
        }
        else if(currentChoice == option2){
            //Option 'E' selected
            programDone();
            break;
        }
        else{
            //Invalid option selected
            badInput();
        }
    }
    return 0;
}
