#ifndef BID_H 
#define BID_H 
 
#include "Plot.h" 
 
class Buyer; 
 
class Bid 
{ 
public: 
    Bid() { mBuyer = nullptr; mPlot = nullptr; } 
    Bid(Buyer* b, Plot* p, double price, int priority) { mBuyer = b; mPlot = p; 
mPrice = price; mPriority = priority; } 
 
    void setBuyer(Buyer* b) { mBuyer = b; } 
    Buyer* getBuyer() { return mBuyer; } 
    const Buyer* getBuyer() const { return mBuyer; } 
 
    void setPlot(Plot* p) { mPlot = p; } 
    Plot* getPlot() { return mPlot; } 
    const Plot* getPlot() const { return mPlot; } 
 
    void setPrice(double price) { mPrice = price; } 
    double getPrice() { return mPrice; } 
 
    void setPriority(int p) { mPriority = p; } 
    int getPriority() { return mPriority; } 
 
    // Implementer en sammenligningsoperator mindre end 
    // som sammenligner på baggrund af prioritet 
    bool operator<(const Bid& rhs); 
 
private: 
    Buyer* mBuyer; 
    Plot* mPlot; 
    double mPrice; 
    int mPriority; 
}; 
 
#endif // BID_H