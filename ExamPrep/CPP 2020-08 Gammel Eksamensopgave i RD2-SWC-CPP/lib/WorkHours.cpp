#include "WorkHours.h"

WorkHours::WorkHours(double standardPrice)
    : mStandardPrice(standardPrice), mExtraPrice(0), mText("No description available"), TimeAndMaterials()
{}

WorkHours::WorkHours(double standardPrice, double extraPrice)
    : mStandardPrice(standardPrice), mExtraPrice(extraPrice), mText("No description available"), TimeAndMaterials()
{}

WorkHours::WorkHours(double standardPrice, double extraPrice, int amount)
    : mStandardPrice(standardPrice), mExtraPrice(extraPrice), mText("No description available"), TimeAndMaterials(amount)
{}

double WorkHours::getPrice() const
{
    return (mStandardPrice + mExtraPrice);
}

std::string WorkHours::getText() const
{
    return mText;
}

void WorkHours::setStandardPrice(double price)
{
    mStandardPrice = price;
}

void WorkHours::setExtraPrice(double price)
{
    mExtraPrice = price;
}

void WorkHours::setDescription(std::string text)
{
    mText = text;
}
