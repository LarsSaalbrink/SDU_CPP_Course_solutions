#include "Ticket.h"
#include <cmath>
#include <stdexcept>

BasicTicket::BasicTicket()
{
    seat = 0;
    ticketNumber = 0;
    city = "[No city provided]";
    opera = "[No operahouse provided]";
    price = 0;
}

BasicTicket::BasicTicket(unsigned int seat, 
                         unsigned int ticketNumber, 
                         std::string city, 
                         std::string opera, 
                         double price)
{
    this->seat = seat;
    this->ticketNumber = ticketNumber;
    this->city = city;
    this->opera = opera;
    this->price = price;
}

unsigned int BasicTicket::getSeat() const
{
    return seat;
}
void BasicTicket::setSeat(unsigned int value)
{
    seat = value;
}

unsigned int BasicTicket::getTicketNumber() const
{
    return ticketNumber;
}
void BasicTicket::setTicketNumber(unsigned int value)
{
    ticketNumber = value;
}

std::string BasicTicket::getCity() const
{
    return city;
}
void BasicTicket::setCity(const std::string &value)
{
    city = value;
}

std::string BasicTicket::getOpera() const
{
    return opera;
}
void BasicTicket::setOpera(const std::string &value)
{
    opera = value;
}

double BasicTicket::getPrice() const
{
    return price;
}
void BasicTicket::setPrice(double value)
{
    price = value;
}


FloorTicket::FloorTicket() : BasicTicket()
{
    //Call the base class default constructor
}

FloorTicket::FloorTicket(unsigned int seat, 
                         unsigned int ticketNumber, 
                         std::string city, 
                         std::string opera, 
                         double price) 
                        : BasicTicket(seat, ticketNumber, city, opera, price)
{
    //Call the base class constructor with parameters
}

double FloorTicket::getPrice() const
{
    double floorPriceFactor = 1.3;

    //return price * floorPriceFactor rounded up to 2 decimal places
    return ceil(price * floorPriceFactor * 100) / 100;
}
