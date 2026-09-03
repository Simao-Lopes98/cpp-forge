// Small command-line simulation of an embedded device manager.

#include "device.hpp"
#include "sensor.hpp"
#include "motor.hpp"
#include <vector>
#include <iostream>

using namespace std;

static vector<Device *> devices;

int main (void)
{

    Sensor sensor (0, true, 13.5, 58);
    Motor motorDc (1, true, 1400, DC, CW);
    Motor motorAcAsc (2, false, 0, AC_ASYNC, CCW);

    devices.push_back (&sensor);
    devices.push_back (&motorDc);
    devices.push_back (&motorAcAsc);

    for (Device * device : devices)
    {
        device->printStatus();
    }
    
}