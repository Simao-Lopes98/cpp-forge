#include "car.hpp"

using namespace std;


Car::Car (string licence, string brand, int x)
{
    this->licence = licence;
    this->brand = brand;
    this->x = x;
}

void Car::printAttr (void)
{
    printf ("License: %s, Brand: %s, X: %d\n", licence.c_str(), brand.c_str(), x);
}