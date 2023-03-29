#ifndef TICKET_H
#define TICKET_H

#include <string>

class BasicTicket{
public:
    BasicTicket();
    BasicTicket(unsigned int seat, 
                unsigned int ticketNumber, 
                const std::string& city, 
                const std::string& opera, 
                double price);

    // Getters & Setters
    const unsigned int getSeat() const;
    void setSeat(unsigned int value);

    const unsigned int getTicketNumber() const;
    void setTicketNumber(unsigned int value);

    const std::string& getCity() const;
    void setCity(const std::string& value);

    const std::string& getOpera() const;
    void setOpera(const std::string& value);

    const double getPrice() const;
    void setPrice(double value);


protected:
    unsigned int seat;
    unsigned int ticketNumber;
    std::string city;
    std::string opera;
    double price;
};

class FloorTicket : public BasicTicket{
public:
    FloorTicket();
    FloorTicket(unsigned int seat, 
                unsigned int ticketNumber, 
                const std::string& city, 
                const std::string& opera, 
                double price);

    const double getPrice() const;
};

#endif // TICKET_H
