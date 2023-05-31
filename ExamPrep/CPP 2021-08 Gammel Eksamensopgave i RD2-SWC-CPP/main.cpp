#include "Ingredient.h"
#include "Paragraph.h"
#include "Recipe.h"

#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>

#define runTests 1

int main()
{
#if runTests
    std::cout << "---------------" << std::endl;
    std::cout << "-- Opgave 1a --" << std::endl;
    std::cout << "---------------" << std::endl;
    std::vector<Ingredient> ingredients;
    ingredients.emplace_back(3, "stk", "\x91g");
    ingredients.emplace_back(170, "g", "sukker");
    ingredients.emplace_back(3, "tsk", "vaniljesukker");
    ingredients.emplace_back(125, "g", "hvedemel");
    ingredients.emplace_back(1, "tsk", "bagepulver");
    ingredients.emplace_back(100, "g", "smeltet sm\x9br");
    ingredients.emplace_back(1, "stk", "stor banan");
    ingredients.emplace_back(100, "g", "hakket m\x9brk chokolade");
    ingredients.emplace_back(8, "stk", "muffinsforme");

    std::cout << "Ingredients : " << std::endl;
    for (Ingredient &i : ingredients)
    {
        std::cout << i.getAmount() << " " << i.getUnit() << " " << i.getName() << std::endl;
    }

    Ingredient aTest;
    aTest.setName("A");
    Ingredient bTest("B");
    std::cout << std::endl;
    std::cout << aTest.getName() << " " << aTest.getAmount() << std::endl;
    std::cout << bTest.getName() << " " << bTest.getAmount() << std::endl;

    std::cout << std::endl
              << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "-- Opgave 1b --" << std::endl;
    std::cout << "---------------" << std::endl;
    // Print ingredient list
    for (Ingredient &ingredient : ingredients)
    {
        std::cout << ingredient << std::endl;
    }

    std::cout << std::endl
              << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "-- Opgave 1c --" << std::endl;
    std::cout << "---------------" << std::endl;
    // Print ingredient list for twice the amount of muffins
    for (Ingredient &ingredient : ingredients)
    {
        std::cout << ingredient * 2 << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Original" << std::endl;
    // Print ingredient list for twice the amount of muffins
    for (Ingredient &ingredient : ingredients)
    {
        std::cout << ingredient << std::endl;
    }

    std::cout << std::endl
              << std::endl;
    std::cout << "--------------" << std::endl;
    std::cout << "-- Opgave 2 --" << std::endl;
    std::cout << "--------------" << std::endl;

    // Opgave 2
    std::string instructions = "Tag en sk\x86l og sl\x86 \x91ggene ud. \n\nTils\x91t vaniljesukker og pisk til det bliver helt hvidt og skummende. \n\nDet kan sagtens tage 5 minutter med en h\x86ndmixer.";
    instructions += "\n\n\n";
    instructions += "S\x86 tils\x91ttes mel og bagepulver.\nNu skal det ikke piskes, men vendes med en dejskraber.";
    instructions += "\n\n\n";
    instructions += "Sm\x9brret smeltes i en lille gryde og n\x86r det er k\x9blet af, skal det vendes i dejen.";
    instructions += "\n\n\n";
    instructions += "Bananerne moses i en tallerken.";
    instructions += "\n\n\n";
    instructions += "Chokolade hakkes groft.";
    instructions += "\n\n\n";
    instructions += "Vend chokolade og bananmos i dejen.";
    instructions += "\n\n\n";
    instructions += "Muffinsformene fyldes med dejen (husk de h\x91ver).\nMuffins bages i 15min ved 170grader forvarmet ovn ";
    std::stringstream sInst(instructions);

    Recipe r("Muffins 8 stk");
    sInst >> r;

    std::cout << "   " << r.getTitle() << "   " << std::endl;
    r.setTitle("Muffins 12 stk");
    std::cout << "   " << r.getTitle() << "   " << std::endl
              << std::endl;
    std::vector<Paragraph> instList = r.getParagraphs();
    for (unsigned int i = 0; i < instList.size(); ++i)
    {
        std::cout << "Step " << std::setw(3) << i + 1 << std::endl;
        std::cout << "--------" << std::endl;
        std::cout << instList[i].getText() << std::endl;
        std::cout << std::endl
                  << std::endl;
    }

#endif

    return 0;
}
