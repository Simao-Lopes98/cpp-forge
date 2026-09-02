// Small command-line simulation of an embedded device manager.

#include "mbed_man.hpp"
#include "sensor.hpp"

#include <iostream>

using namespace std;



int main (void)
{
    Device deviceMan;
    Sensor sensor1 (1, true, SENSOR, 13.5, 58);

    deviceMan.setId(2);
    deviceMan.setState(false);
    deviceMan.setType(MOTOR);

    deviceMan.printStatus();
    sensor1.printStatus();
}