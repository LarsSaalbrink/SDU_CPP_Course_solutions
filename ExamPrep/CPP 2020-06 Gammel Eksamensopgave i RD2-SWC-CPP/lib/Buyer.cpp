#include "Buyer.h"

#include <algorithm>
#include <vector>

// Laver et bud (Bid) på grunden plot med prisen price
// Gem bud i mBids vector (bemærk pointer)
// Skal sortere alle bud afhængig af prioritet, så
// højeste prioritet er (1.) er forrest i listen.
// HINT: std::sort med brug af lambda-funktion
void Buyer::addBid(Plot *plot, double price, int priority){
    mBids.push_back(new Bid(this, plot, price, priority));

    std::sort(mBids.begin(),mBids.end(), [](Bid* a, Bid* b) {
        return (a->getPriority() < b->getPriority());
    });
}
