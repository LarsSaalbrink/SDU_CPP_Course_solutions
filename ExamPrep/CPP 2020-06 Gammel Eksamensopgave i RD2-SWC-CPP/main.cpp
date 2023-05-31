#include "Lot.h"
#include "Plot.h"
#include "Bid.h"
#include "Buyer.h"

#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>

#define runTests 1


void findWinningBids(std::vector<Buyer*> buyers){
    
    
}


int main()
{
#if runTests
    std::cout << "--------------------" << std::endl;
    std::cout << "-- Test Opgave 1a --" << std::endl;
    std::cout << "--------------------" << std::endl;
    Lot lt;
    lt.setAddress("Stendyssen 31");
    lt.setMinimumPrice(979200);
    lt.setSize(720);
    const Lot &l = lt;
    std::cout << std::left << std::setw(20) << l.getAddress() << std::right << std::setw(9) << l.getMinimumPrice() << std::setw(6) << l.getSize() << std::endl;
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "-- Test Opgave 1b --" << std::endl;
    std::cout << "--------------------" << std::endl;

    std::string lots = "";
    lots += "Stendyssen 1;965430;703\n";
    lots += "Stendyssen 3;992160;736\n";
    lots += "Stendyssen 5;990540;734\n";
    lots += "Stendyssen 7;961380;698\n";
    lots += "Stendyssen 9;909540;634\n";
    lots += "Stendyssen 11;964620;702\n";
    lots += "Stendyssen 13;903060;626\n";
    lots += "Stendyssen 15;978390;719\n";
    lots += "Stendyssen 17;976770;717\n";
    lots += "Stendyssen 19;963000;700\n";
    lots += "Stendyssen 21;981630;723\n";
    lots += "Stendyssen 23;958950;695\n";
    lots += "Stendyssen 25;953280;688\n";
    lots += "Stendyssen 27;933840;664\n";

    std::stringstream ss(lots);
    std::vector<Lot> lotList;
    while (!ss.eof())
    {
        std::string line;
        std::getline(ss, line);
        if (line.size() > 1)
        {
            std::stringstream ssLine(line);
            Lot l;
            ssLine >> l;
            lotList.push_back(l);
        }
    }
    lotList.emplace_back("Stendyssen 29", 907110, 631);
    lt.setAddress("Stendyssen 31");
    lt.setMinimumPrice(979200);
    lt.setSize(720);

    lotList.push_back(lt);

    for (unsigned int i = 0; i < lotList.size(); ++i)
    {
        const Lot &l = lotList[i];
        std::cout << l << std::endl;
    }

    std::cout << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "-- Test Opgave 2a --" << std::endl;
    std::cout << "--------------------" << std::endl;

    std::vector<Plot *> plots;
    plots.push_back(new Plot("Stendyssen 1"));
    plots.push_back(new Plot("Stendyssen 3"));
    plots.push_back(new Plot("Stendyssen 5"));
    plots.push_back(new Plot("Stendyssen 7"));
    plots.push_back(new Plot("Stendyssen 9"));
    plots.push_back(new Plot("Stendyssen 11"));
    plots.push_back(new Plot("Stendyssen 13"));
    plots.push_back(new Plot("Stendyssen 15"));
    plots.push_back(new Plot("Stendyssen 17"));

    std::vector<Buyer *> buyers;
    buyers.push_back(new Buyer("Preben"));
    buyers.push_back(new Buyer("Ole"));
    buyers.push_back(new Buyer("Henrik"));
    buyers.push_back(new Buyer("Christian"));
    buyers.push_back(new Buyer("Jan"));

    buyers[0]->addBid(plots[7], 996408, 1);
    buyers[0]->addBid(plots[8], 985400, 2);
    buyers[0]->addBid(plots[5], 990312, 3);
    buyers[1]->addBid(plots[7], 997315, 2);
    buyers[1]->addBid(plots[8], 985123, 1);
    buyers[1]->addBid(plots[5], 1001002, 3);
    buyers[2]->addBid(plots[7], 1002003, 1);
    buyers[2]->addBid(plots[4], 1000000, 2);
    buyers[3]->addBid(plots[5], 990123, 1);
    buyers[3]->addBid(plots[4], 999000, 2);
    buyers[4]->addBid(plots[5], 991322, 1);
    buyers[4]->addBid(plots[8], 990000, 2);

    for (Buyer *buyer : buyers)
    {
        for (Bid *bid : buyer->getBids())
        {
            std::cout << std::left << std::setw(12) << bid->getBuyer()->getName() << std::setw(20) << bid->getPlot()->getAddress() << std::right << std::setw(9) << std::setprecision(10) << bid->getPrice() << std::setw(5) << bid->getPriority() << std::endl;
        }
    }

    std::cout << std::endl << std::endl; 
    std::cout << "--------------------" << std::endl; 
    std::cout << "-- Test Opgave 2b --" << std::endl; 
    std::cout << "--------------------" << std::endl; 
    findWinningBids(buyers); 
 
    std::cout << std::endl; 
    std::cout << std::left << std::setw(12) << "Navn" <<  
                 std::setw(20) << "Grund" << 
                 std::right << std::setw(9) << "Pris" <<  
                 std::setw(5) << "Pr." << std::endl; 
 
    for (Plot* g : plots) { 
        Bid* bid = g->getBid(); 
        if (bid) { 
            std::cout << std::left << std::setw(12) <<  
                         bid->getBuyer()->getName() << 
                         std::setw(20) << bid->getPlot()->getAddress() << 
                         std::right << std::setw(9) << bid->getPrice() << 
                         std::setw(5) << bid->getPriority() << std::endl; 
        } else { 
            std::cout << std::left << std::setw(12) << "Ikke solgt" << 
                         std::setw(20) << g->getAddress() << std::endl; 
        } 
 
    }

#endif

    return 0;
}
