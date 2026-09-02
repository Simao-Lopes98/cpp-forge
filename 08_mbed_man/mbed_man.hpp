#pragma once

#include <inttypes.h>
#include <iostream>

using namespace std;

// Typedefs
typedef enum {
    SENSOR,
    MOTOR,
    LED,
    END_OF_TYPE
} deviceType_t;

// class defs
class Device {
    private:
        u_int16_t id;
        bool state;
        deviceType_t type;
        string typeStr;

    public:
        bool getState (void);
        void setState (bool state);
        u_int16_t getId (void);
        void setId (u_int16_t id);
        deviceType_t getType (void);
        void setType (deviceType_t type);
        virtual void printStatus (void);
    protected:
        void printSeparator (void);
        string typeToString (deviceType_t type);
        string stateToString (bool state);

};