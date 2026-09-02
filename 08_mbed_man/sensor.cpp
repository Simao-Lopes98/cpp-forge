#include "sensor.hpp"


// Method def

Sensor::Sensor (    int id, 
                    bool state, 
                    deviceType_t type, 
                    float temperatur, 
                    float humidity)
{
    setId(id);
    setState (state);
    setType (type);
    setTemp (temperatur);
    setHum (humidity);
}

float Sensor::getTemp (void)
{
    return temperature;
}

void Sensor::setTemp (float temp)
{
    this->temperature = temp;
}

float Sensor::getHum (void)
{
    return humidity;
}

void Sensor::setHum (float hum)
{
    this->humidity = hum;
}

void Sensor::printStatus (void) 
{
    printf ("Id:    %" PRIu16 "\n", getId());
    printf ("State: %s\n", stateToString(getState()).c_str());
    printf ("Type:  %s\n", typeToString(getType()).c_str());
    printf ("Temperature:  %f ºC\n", getTemp());
    printf ("Humidity:  %f %%\n", getHum());
    printSeparator();
}

