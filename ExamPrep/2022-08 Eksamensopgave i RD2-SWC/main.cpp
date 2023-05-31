#include "Expense.h"
#include "ProductCost.h"
#include "Product.h"

#include <iomanip>
#include <iostream>
#include <vector>

#define runTests 1

int main()
{
#if runTests
    // Opgave 1a test
    std::cout << "---------------" << std::endl;
    std::cout << "-- Opgave 1a --" << std::endl;
    std::cout << "---------------" << std::endl;
    Expense transport("Transport (km)", 2.17);
    Expense packaging("Packaging", 1.01);
    Expense leather("Leather", 1130.05);
    Expense buckle("Buckle", 5.30);
    Expense workhours("Workhours", 180);
    std::cout << std::setw(20) << std::left << transport.getName()
              << transport.getCost() << std::endl;
    std::cout << std::setw(20) << std::left << packaging.getName()
              << packaging.getCost() << std::endl;

    // Opgave 1b test
    std::cout << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "-- Opgave 1b --" << std::endl;
    std::cout << "---------------" << std::endl;
    ProductCost p1;
    p1.addExpense(1200, transport);
    p1.addExpense(1, packaging);
    p1.addExpense(0.2, leather);
    p1.addExpense(2, buckle);
    p1.addExpense(1, workhours);
    std::cout << p1;
    std::cout << "Total cost for product " << p1.getProductName() << ": " << p1.totalCost() << std::endl
              << std::endl;

    // Opgave 2
    std::cout << "---------------" << std::endl;
    std::cout << "-- Opgave 2  --" << std::endl;
    std::cout << "---------------" << std::endl;
    std::vector<Product> products;

    products.emplace_back("Leather bag", 1500);
    products.emplace_back("Lamp", 1250);
    products.emplace_back(products[0]);
    // Copy constructor
    products.emplace_back(std::move(products[0]));
    // Move constructor
    products.emplace_back("Table", 1200);
    products.emplace_back("Desk", 2000);
    
    products[4] = products[1];
    products[5] = std::move(products[1]);
    for (Product p : products)
    {
        if (p.getLength() > 0)
            std::cout << std::left << std::setw(20) << p.getName() << p.getPrice() << std::endl;
        else
            std::cout << "No description available" << std::endl;
    }
    std::cout << std::endl;
    products[2].setName("LALA");
    products[4].setName("Old Table");
    for (const Product &p : products)
    {
        if (p.getLength() > 0)
            std::cout << std::left << std::setw(20) << p.getName() << p.getPrice() << std::endl;
        else
            std::cout << "No description available" << std::endl;
    }
    std::cout << std::endl;
    products[3].setName("LALA2");
    products[5].setName("Old Desk");
    for (const Product &p : products)
    {
        if (p.getLength() > 0)
            std::cout << std::left << std::setw(20) << p.getName() << p.getPrice() << std::endl;
        else
            std::cout << "No description available" << std::endl;
    }

#endif

    return 0;
}
