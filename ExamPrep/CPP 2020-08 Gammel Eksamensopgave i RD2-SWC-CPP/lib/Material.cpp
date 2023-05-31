#include "Material.h"

Material::Material()
    : mUnitPrice(0), TimeAndMaterials() {}

Material::Material(std::string description, double unitPrice)
    : mDescription(description), mUnitPrice(unitPrice), TimeAndMaterials()
{}

void Material::setPrice(double price)
{
    mUnitPrice = price;
}

void Material::setDescription(std::string description)
{
    mDescription = description;
}

double Material::getPrice() const
{
    return mUnitPrice;
}

std::string Material::getText() const
{
    return mDescription;
}
