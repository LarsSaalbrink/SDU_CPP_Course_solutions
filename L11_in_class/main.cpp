#include <iostream>
#include <iomanip>
#include <Safety.h>


#include <UI.h>


static void testFunc(){
   std::cout << "Test function called from main.\n";
}

int main()
{
    testFunc();

    return 0;
}
