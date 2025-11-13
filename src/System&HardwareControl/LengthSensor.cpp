#include "Lengthsensor.h"
#include <iostream>

// Wir definieren eine feste, simulierte Länge für das Brot in mm.
const float SIMULATED_LENGTH = 250.0f; // Simulierte Länge in mm
float LengthSensor::measureLength()
{
// Ausgabe zur Protokollierung
    std::cout << "LengthSensor: Automatische Messung durchgeführt. Ergebnis: " 
               << SIMULATED_LENGTH << " mm." << std::endl;
    return SIMULATED_LENGTH;
}