#include "TimeAndMaterials.h"
#include "Material.h"
#include "WorkHours.h"
#include "TimeSheet.h"

#include <iostream>
#include <iomanip>

#define runTests 1

int main()
{
#if runTests
    std::cout << "------------------------------------------------------------------------" << std::endl;
    std::cout
        << "--                              Opgave 1                              --" << std::endl;
    std::cout
        << "------------------------------------------------------------------------" << std::endl;

    WorkHours *w1 = new WorkHours;
    WorkHours *w2 = new WorkHours(500);
    WorkHours *w3 = new WorkHours(500, 120);
    WorkHours *w4 = new WorkHours(500, 130, 2);
    WorkHours *w5 = new WorkHours(*w3);

    w2->setDescription("Mandetimer");
    w3->setDescription("Maskintimer");
    w4->setDescription("Overarbejdstimer");
    w5->setDescription("Ekstratimer");
    w5->setAmount(8);

    Material *m1 = new Material();
    Material *m2 = new Material("Motrik", 2);
    Material *m3 = new Material("Gevindstang", 30);
    m1->setDescription("Bolt");
    m1->setPrice(10);
    m1->setAmount(2);
    m2->setAmount(5);
    m3->setAmount(3);

    std::cout << std::right << std::setw(8) << "Antal"
              << " " << std::left << std::setw(40) << "Udfort arbejde og materialeforbrug " << std::right
              << std::setw(10) << "Pris" << std::setw(10) << "I alt" << std::endl;
    std::cout << *w1 << std::endl;
    std::cout << *w2 << std::endl;
    std::cout << *w3 << std::endl;
    std::cout << *w4 << std::endl;
    std::cout << *w5 << std::endl;
    std::cout << *m1 << std::endl;
    std::cout << *m2 << std::endl;
    std::cout << *m3 << std::endl;

    std::cout << std::endl
              << std::endl;

    std::cout << "------------------------------------------------------------------------" << std::endl; 
        std::cout
              << "--                              Opgave 2                              --" << std::endl; 
        std::cout
              << "------------------------------------------------------------------------" << std::endl; 

        TimeSheet ts;
    ts.addTimeAndMaterial(w1);
    ts.addTimeAndMaterial(m1);
    ts.addTimeAndMaterial(w2);
    ts.addTimeAndMaterial(w3);
    ts.addTimeAndMaterial(m2);
    ts.addTimeAndMaterial(w4);
    ts.addTimeAndMaterial(m3);
    ts.addTimeAndMaterial(w5);

    std::cout << ts << std::endl
              << std::endl;

    ts.sortByType();

    std::cout << ts << std::endl;
#endif

    return 0;
}
