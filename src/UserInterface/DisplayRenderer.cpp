#include "DisplayRenderer.h"
#include <iostream>
#include <iomanip> // Für die Formatierung von Gleitkommazahlen

void DisplayRenderer::renderParameters(float thickness, int count, bool isSafetyOK) {
    // Setzt die Genauigkeit der Ausgabe auf 1 Nachkommastelle für die Dicke
    std::cout << std::fixed << std::setprecision(1); 
    
    std::cout << "\n===================================" << std::endl;
    std::cout << "          Anzeige-Update             " << std::endl;
    std::cout << "=====================================" << std::endl;
    
    // Ausgabe der eingestellten Dicke (BS-503)
    std::cout << "Aktuelle Dicke:         " << thickness << " mm" << std::endl;
    
    // Ausgabe der berechneten Scheibenanzahl (BS-503)
    std::cout << "Berechnete Scheiben:    " << count << std::endl;
    
    // Anzeige des Zustands (aus SafetyController)
    std::cout << "Startbedingung erfüllt: " << (isSafetyOK ? "JA ✅" : "NEIN ❌") << std::endl;
    
    std::cout << "===================================\n" << std::endl;
}