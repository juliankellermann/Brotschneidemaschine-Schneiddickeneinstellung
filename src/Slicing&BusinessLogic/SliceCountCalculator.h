#ifndef SliceCountCalculator_H
#define SliceCountCalculator_H

#include "../System&HardwareControl/LengthSensor.h"
#include <cmath> //für std::floor

class SliceCountCalculator
{
public:
    // Berechnet die Anzahl der Scheiben basierend auf der gemessenen Brotlänge und der gewünschten Schneiddicke
    int calculateCount(LengthSensor &lengthSensor, float thickness);
};
#endif