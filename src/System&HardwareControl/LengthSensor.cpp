#include "Lengthsensor.h"
#include <iostream>

// Wir definieren eine feste, simulierte Länge für das Brot in mm.
void LengthSensor::setSimulatedLength(float length){
    simulatedLength = length; 
} // Simulierte Länge in mm
float LengthSensor::measureLength()
{
// Ausgabe zur Protokollierung
    std::cout << "LengthSensor: Automatische Messung durchgeführt. Ergebnis: " 
               << simulatedLength << " mm." << std::endl;
    return simulatedLength;
}
