#include "mbed_man.hpp"

static string deviceTypeMap [deviceType_t::END_OF_TYPE] =
{
    "Sensor",
    "Motor",
    "LED"
};

// class function defs
bool Device::getState ()
{
    return state;
}

void Device::setState (bool state)
{
    this->state = state;
}

u_int16_t Device::getId (void)
{
    return id;
}

void Device::setId (u_int16_t id)
{
    this->id = id;
}

deviceType_t Device::getType (void)
{
    return type;
}

void Device::setType (deviceType_t type)
{
    this->type = type;
}

string Device::typeToString (deviceType_t type)
{
    if (type < 0 || type > deviceType_t::END_OF_TYPE)
    {
        return "UNDEF";
    }

    return deviceTypeMap [type];
    
}

string Device::stateToString (bool state)
{
    return (state == true) ? "Online" : "Offline";  
}

void Device::printSeparator (void)
{
    printf ("--------------------------------\n");
}

void Device::printStatus (void)
{
    printf ("Id:    %" PRIu16 "\n", id);
    printf ("State: %s\n", stateToString(state).c_str());
    printf ("Type:  %s\n", typeToString (type).c_str());
    printSeparator();
}