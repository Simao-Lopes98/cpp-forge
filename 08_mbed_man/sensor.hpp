#pragma once

#include <inttypes.h>
#include <iostream>
#include "device.hpp"

using namespace std;

class Sensor : public Device 
{
    private:
        float temperature;
        float humidity;
    public:
        Sensor (int id,
                bool state,
                float temperatur,
                float humidity);

        float getTemp (void);
        void setTemp (float temp);
        float getHum (void);
        void setHum (float hum);
        void printStatus (void) override;
    protected:

};