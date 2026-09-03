#include "sensor.hpp"


// Method def

Sensor::Sensor (    int id, 
                    bool state, 
                    float temperatur, 
                    float humidity)
{
    setId(id);
    setState (state);
    setType (SENSOR);
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
    printBasicStatuses();
    printf ("Temperature:  %f ºC\n", getTemp());
    printf ("Humidity:  %f %%\n", getHum());
    printSeparator();
}

