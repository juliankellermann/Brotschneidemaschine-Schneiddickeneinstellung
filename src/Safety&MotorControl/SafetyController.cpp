#include "SafetyController.h"
#include <iostream>

bool SafetyController::checkStartCondition(float thickness)
{
    // Prüfen, ob die Dicke größer oder gleich dem Minimum und kleiner oder gleich dem Maximum ist.
    if (thickness >= MIN_THICKNESS && thickness <= MAX_THICKNESS)
    {
        // Ausgabe zur Protokollierung des Startschutzes
        std::cout << "SafetyController: OK. Dicke (" << thickness << " mm) ist innerhalb der Grenzwerte." << std::endl;
        return true;
    }
    else
    {
        std::cerr << "SafetyController: ERROR Dicke (" << thickness 
                  << " mm) liegt außerhalb der Grenzwerte [" << MIN_THICKNESS 
                  << " - " << MAX_THICKNESS << " mm]. Start nicht möglich." << std::endl;
        return false;
    }
}