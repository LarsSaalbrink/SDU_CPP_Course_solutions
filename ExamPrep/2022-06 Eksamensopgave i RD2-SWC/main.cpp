#include <iostream>
#include <algorithm>
#include <random>
#include <iomanip>
#include <iterator>

#include "Table.h"
#include "DateTime.h"


#define runTests 1

int main()
{
    #if runTests
    std::cout << std::endl
              << std::endl;
    std::cout << "--------------" << std::endl;
    std::cout << "-- Opgave 1 --" << std::endl;
    std::cout << "--------------" << std::endl;
    Table t;
    t.setHeaders("Ref", "Tekst", "Kontant");
    t.addData(1, "Sko", 1025.25);
    t.addData(2, "Toj", 699.99);
    t.addData(1, "Taske", 1500.00);
    t.addData(1, "Andet", 249.90);
    t.addData(1, "Toj", 530.15);
    t.addData(2, "Sko", 799.00);
    t.addData(2, "Andet", 225.40);
    t.outputData(std::cout);
    std::cout << std::endl
              << std::endl;

    std::cout << std::endl
              << std::endl;
    std::cout << "--------------" << std::endl;
    std::cout << "-- Opgave 2 --" << std::endl;
    std::cout << "--------------" << std::endl;
    std::vector<DateTime> dtv;
    for (unsigned int y = 2000; y < 2005; ++y)
    {
        for (unsigned int m = y % 2 + 1; m < 12; m += 3)
        {
            for (unsigned int d = (m + y) % 3 + 1; d < 30; d += 5)
            {
                for (unsigned int h = d % 2 + 7; h < 18 + m % 2; h += d % 2 + 1)
                {
                    for (unsigned int min = h % 2; min < 60; min += d % 2 + h % 2 + 15)
                    {
                        for (unsigned int s = min % 2 + h % 2 + d % 2; s < 60; s += min % 2 +
                                                                                    h % 2 + d % 2 + 18)
                        {
                            dtv.emplace_back(y, m, d, h, min, s);
                        }
                    }
                }
            }
        }
    }
    std::ostream_iterator<DateTime> dti(std::cout, "\n");
    std::shuffle(dtv.begin(), dtv.end(), std::default_random_engine(20));
    std::vector<DateTime> dtv20(dtv.begin(), dtv.begin() + 20);
    std::cout << std::endl
              << "Shuffled order" << std::endl;
    std::cout << "----------------" << std::endl;
    std::copy(dtv20.begin(), dtv20.end(), dti);
    std::sort(dtv20.begin(), dtv20.end());
    std::cout << std::endl
              << "Ascending order" << std::endl;
    std::cout << "----------------" << std::endl;
    std::copy(dtv20.begin(), dtv20.end(), dti);
    std::cout << std::endl
              << "Descending order" << std::endl;
    std::cout << "----------------" << std::endl;
    std::sort(dtv20.begin(), dtv20.end(), std::greater<DateTime>());
    std::copy(dtv20.begin(), dtv20.end(), dti);
    std::cout << std::endl
              << "Equality test" << std::endl;
    std::cout << "----------------" << std::endl;
    for (unsigned int i = 0; i < dtv20.size() - 1; ++i)
    {
        std::cout << std::setw(2) << i << ": ";
        std::string test;
        test = dtv20[i] == dtv20[i] ? "YES" : "NO";
        std::cout << test << " ";
        test = dtv20[i] == dtv20[i + 1] ? "YES" : "NO";
        std::cout << test << std::endl;
    }

    #endif

    return 0;
}
