#include "Ticket.h"
#include <cmath>
#include <stdexcept>

BasicTicket::BasicTicket(){
    seat = 0;
    ticketNumber = 0;
    city = "[No city provided]";
    opera = "[No operahouse provided]";
    price = 0;
}

BasicTicket::BasicTicket(unsigned int seat, 
                         unsigned int ticketNumber, 
                         const std::string& city, 
                         const std::string& opera, 
                         double price){
    this->seat = seat;
    this->ticketNumber = ticketNumber;
    this->city = city;
    this->opera = opera;
    this->price = price;
}

const unsigned int BasicTicket::getSeat() const{
    return seat;
}
void BasicTicket::setSeat(unsigned int value){
    seat = value;
}

const unsigned int BasicTicket::getTicketNumber() const{
    return ticketNumber;
}
void BasicTicket::setTicketNumber(unsigned int value){
    ticketNumber = value;
}

const std::string& BasicTicket::getCity() const{
    return city;
}
void BasicTicket::setCity(const std::string& value){
    city = value;
}

const std::string& BasicTicket::getOpera() const{
    return opera;
}
void BasicTicket::setOpera(const std::string& value){
    opera = value;
}

const double BasicTicket::getPrice() const{
    return price;
}
void BasicTicket::setPrice(double value){
    price = value;
}


FloorTicket::FloorTicket() : BasicTicket(){
    //Call the base class default constructor as defined by header
}

FloorTicket::FloorTicket(unsigned int seat, 
                         unsigned int ticketNumber, 
                         const std::string& city, 
                         const std::string& opera, 
                         double price) 
                        : BasicTicket(seat, ticketNumber, city, opera, price){
    //Call the base class constructor with parameters
}

const double FloorTicket::getPrice() const{
    double floorPriceFactor = 1.3;

    //return price * floorPriceFactor rounded up to 2 decimal places
    return ceil(price * floorPriceFactor * 100) / 100;
}
