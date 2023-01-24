#include <iostream>
#include "Ticket.h"

int main()
{
    //Set decimal precision to 2
    std::cout << std::fixed << std::cout.precision(2) << "\b";

    //Create an uninitialized basic ticket
    BasicTicket uninitializedTicket = BasicTicket();

    //Create a basic ticket
    BasicTicket basicTicket(1, 1, "Odense", "Prebens Classroom", 42.0);

    //Create an uninitialized floor ticket
    FloorTicket uninitializedFloorTicket = FloorTicket();

    //Create a floor ticket
    FloorTicket floorTicket(2, 2, "Odense", "Prebens Classroom", 42.0);

    //Print the tickets
    std::cout << "Uninitialized basic ticket:\n";
    std::cout << "Seat: " << uninitializedTicket.getSeat();
    std::cout << "\nTicket number: " << uninitializedTicket.getTicketNumber();
    std::cout << "\nCity: " << uninitializedTicket.getCity();
    std::cout << "\nOpera: " << uninitializedTicket.getOpera();
    std::cout << "\nPrice: " << uninitializedTicket.getPrice();

    std::cout << "\n\nBasic ticket:\n";
    std::cout << "Seat: " << basicTicket.getSeat();
    std::cout << "\nTicket number: " << basicTicket.getTicketNumber();
    std::cout << "\nCity: " << basicTicket.getCity();
    std::cout << "\nOpera: " << basicTicket.getOpera();
    std::cout << "\nPrice: " << basicTicket.getPrice();

    std::cout << "\n\nUninitialized floor ticket:\n";
    std::cout << "Seat: " << uninitializedFloorTicket.getSeat();
    std::cout << "\nTicket number: " << uninitializedFloorTicket.getTicketNumber();
    std::cout << "\nCity: " << uninitializedFloorTicket.getCity();
    std::cout << "\nOpera: " << uninitializedFloorTicket.getOpera();
    std::cout << "\nPrice: " << uninitializedFloorTicket.getPrice();

    std::cout << "\n\nFloor ticket:\n";
    std::cout << "Seat: " << floorTicket.getSeat();
    std::cout << "\nTicket number: " << floorTicket.getTicketNumber();
    std::cout << "\nCity: " << floorTicket.getCity();
    std::cout << "\nOpera: " << floorTicket.getOpera();
    std::cout << "\nPrice: " << floorTicket.getPrice() << "\n";
    
    return 0;
}
