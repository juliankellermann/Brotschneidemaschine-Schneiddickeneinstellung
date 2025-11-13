#include "SliceCountCalculator.h"
#include <iostream>

int SliceCountCalculator::calculateCount(LengthSensor &lengthSensor, float thickness)
{
    // 1. Länge anfordern
    float length = lengthSensor.measureLength();

    // 2. Berechnung: Länge / Dicke
    // Wir verwenden std::floor, um nur die ganze Scheibenanzahl zu erhalten.
    float result = length / thickness;

    // 3. Ergebnis abrunden und in einen Integer umwandeln
    int sliceCount = static_cast<int>(std::floor(result));

    return sliceCount;
}