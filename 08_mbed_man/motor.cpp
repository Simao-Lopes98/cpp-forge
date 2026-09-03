#include "motor.hpp"

// Locals
static string motorTypeMap[END_MOTOR_TYPE]
{
    "DC",
    "AC_ASYNC",
    "AC_SYNC",
    "BRUSHLESS"
};

static string motorDirMap[END_MOTOR_DIR]
{
    "CW",
    "CCW"
};

// Function defs

Motor::Motor (  int id,  
                bool state, 
                uint16_t speedRpm, 
                motorType_t motorType,
                motorDir_t motorDir)
{
    setId (id);
    setState (state);
    setType (MOTOR);
    setMotorSpeedRpm (speedRpm);
    setMotorType (motorType);
    setMotorDir (motorDir);
}


void Motor::setMotorSpeedRpm (uint16_t speedRpm)
{
    this->speedRpm = speedRpm; 
}

uint16_t Motor::getMotorSpeedRpm (void)
{
    return speedRpm;
}

void Motor::setMotorType (motorType_t motorType)
{
    this->motorType = motorType;
}

motorType_t Motor::getMotorType (void)
{
    return motorType;
}

void Motor::setMotorDir (motorDir_t motorDir)
{
    this->motorDir = motorDir;
}

motorDir_t Motor::getMotorDir(void)
{
    return motorDir;
}

string Motor::motoTypeToStr (motorType_t motorType)
{
    if (motorType < DC || motorType > (END_MOTOR_TYPE - 1))
    {
        return INVALID_MOTOR_TYPE;
    }

    return motorTypeMap[motorType];
}

string Motor::motorDirToStr (motorDir_t motorDir)
{
    if (motorDir < CW || motorDir > (END_MOTOR_DIR -1))
    {
        return INVALID_MOTOR_DIR;
    }

    return motorDirMap[motorDir];
}

void Motor::printStatus (void)
{
    printBasicStatuses();
    printf ("Motor Type: %s\n", motoTypeToStr(getMotorType()).c_str());
    printf ("Speed %" PRIu16 " RPM\n", getMotorSpeedRpm());
    printf ("Direction: %s\n", motorDirToStr(getMotorDir()).c_str());
    printSeparator();
}