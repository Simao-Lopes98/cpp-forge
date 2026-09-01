
using namespace std;
#include "car.hpp"
#include "vehc.hpp"

int main (void)
{
    Car myCar ("15-25-AF", "Toyota", 120);
    myCar.printAttr();
    myCar.honk();

    return 0;
}