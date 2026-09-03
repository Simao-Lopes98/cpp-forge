#pragma once

#include <inttypes.h>
#include <iostream>
#include "device.hpp"

#define INVALID_MOTOR_TYPE  "UNDEF"
#define INVALID_MOTOR_DIR   "UNDEF"

using namespace std;

typedef enum {
    DC,
    AC_ASYNC,
    AC_SYNC,
    BRUSHLESS,
    END_MOTOR_TYPE
} motorType_t;

typedef enum {
    CW,
    CCW,
    END_MOTOR_DIR
} motorDir_t;

class Motor : public Device 
{
    private:
        uint16_t speedRpm;
        motorType_t motorType;
        motorDir_t motorDir;
    public:
        Motor ( int id,  
                bool state, 
                uint16_t speedRpm, 
                motorType_t motorType,
                motorDir_t motorDir);

        void setMotorSpeedRpm (uint16_t speedRpm);
        uint16_t getMotorSpeedRpm (void);
        void setMotorType (motorType_t motorType);
        motorType_t getMotorType (void);
        void setMotorDir (motorDir_t motorDir);
        motorDir_t getMotorDir(void);
        void printStatus (void) override;
    protected:
        string motoTypeToStr (motorType_t motorType);
        string motorDirToStr (motorDir_t motorDir);
};