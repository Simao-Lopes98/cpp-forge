#pragma once
#include <iostream>
#include "vehc.hpp"

using namespace std;

class Car: public Vehicle {
    public:
        Car (string licence, string brand, int x);
        void printAttr (void);
    private:
        string licence;
        string brand;
};