#ifndef TICKET_H
#define TICKET_H

#include <string>

class BasicTicket
{
public:
    BasicTicket();
    BasicTicket(unsigned int seat, 
                unsigned int ticketNumber, 
                std::string city, 
                std::string opera, 
                double price);

    // Getters & Setters
    unsigned int getSeat() const;
    void setSeat(unsigned int value);

    unsigned int getTicketNumber() const;
    void setTicketNumber(unsigned int value);

    std::string getCity() const;
    void setCity(const std::string &value);

    std::string getOpera() const;
    void setOpera(const std::string &value);

    double getPrice() const;
    void setPrice(double value);


protected:
    unsigned int seat;
    unsigned int ticketNumber;
    std::string city;
    std::string opera;
    double price;
};

class FloorTicket : public BasicTicket
{
public:
    FloorTicket();
    FloorTicket(unsigned int seat, 
                unsigned int ticketNumber, 
                std::string city, 
                std::string opera, 
                double price);

    double getPrice() const;
};

#endif // TICKET_H
