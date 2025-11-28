#ifndef LengthSensor_H
#define LengthSensor_H

class LengthSensor
{
private:
    float simulateLength = 250.0f; //Standartwert
public:
    // Simuliert die Messung der Länge des Brotes
    float measureLength();
    void setSimulatedLength(float length);
};
#endif
