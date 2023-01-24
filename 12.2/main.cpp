#include <iostream>
#include "Ticket.h"

int main()
{
    //Set decimal precision to 2
    std::cout << std::fixed << std::cout.precision(2) << "\b";

    //Create a basic ticket
    BasicTicket basicTicket(1, 1, "Odense", "Prebens Classroom", 42.0);

    //Create a floor ticket
    FloorTicket floorTicket(2, 2, "Odense", "Prebens Classroom", 42.0);

    //Print the tickets
    std::cout << "Basic ticket:\n";
    std::cout << "Seat: " << basicTicket.getSeat();
    std::cout << "\nTicket number: " << basicTicket.getTicketNumber();
    std::cout << "\nCity: " << basicTicket.getCity();
    std::cout << "\nOpera: " << basicTicket.getOpera();
    std::cout << "\nPrice: " << basicTicket.getPrice();

    std::cout << "\n\nFloor ticket:\n";
    std::cout << "Seat: " << floorTicket.getSeat();
    std::cout << "\nTicket number: " << floorTicket.getTicketNumber();
    std::cout << "\nCity: " << floorTicket.getCity();
    std::cout << "\nOpera: " << floorTicket.getOpera();
    std::cout << "\nPrice: " << floorTicket.getPrice() << "\n";
    
    return 0;
}
