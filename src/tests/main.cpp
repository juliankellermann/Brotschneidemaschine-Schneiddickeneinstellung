#include <iostream>
#include <cassert>
#include <cmath>
#include <string>

// Binden Sie hier Ihre Header-Dateien ein

#include "../System&HardwareControl/LengthSensor.h"
#include "../UserInterface/ThicknessSettingGUI.h"
#include "../Safety&MotorControl/SafetyController.h"
#include "../Slicing&BusinessLogic/SliceCountCalculator.h"


// Hilfsfunktion für schöne Ausgaben
void printTestResult(const std::string& testID, bool passed, const std::string& message) {
    if (passed) {
        std::cout << "[PASS] " << testID << ": " << message << std::endl;
    } else {
        std::cout << "[FAIL] " << testID << ": " << message << std::endl;
    }
    std::cout << "--------------------------------------------------" << std::endl;
}

int main() {
    std::cout << "STARTE TESTDURCHLAUF..." << std::endl << std::endl;

    // ==========================================
    // UNIT TESTS (M1 - M3)
    // ==========================================

    // --- M1: SafetyController ---
    {
        SafetyController sc;
        float testThickness = 1.0f;
        // Aktion: Prüfung aufrufen
        bool result = sc.checkStartCondition(testThickness);
        // Erwartetes Ergebnis: TRUE
        printTestResult("M1", result == true, "SafetyController Check mit T=1.0");
    }

    // --- M2: SliceCountCalculator ---
    {
        SliceCountCalculator calc;
        LengthSensor sensor; // Mocking via Setter
        sensor.setSimulatedLength(300.0f); // Vorbedingung: L=300
        float thickness = 10.0f;

        // Aktion: Berechne Anzahl
        int count = calc.calculateCount(sensor, thickness);

        // Erwartetes Ergebnis: 30 (300 / 10)
        printTestResult("M2", count == 30, "SliceCountCalculator (300mm / 10mm = 30)");
    }

    // --- M3: LengthSensor ---
    {
        LengthSensor sensor;
        sensor.setSimulatedLength(200.0f); // Vorbedingung: Simuliert 200.0

        // Aktion: measureLength
        float measured = sensor.measureLength();

        // Erwartetes Ergebnis: 200.0
        // Hinweis: Bei Float-Vergleichen sollte man eigentlich Epsilon verwenden,
        // aber für diesen Test reicht == meist aus, da wir harte Zuweisungen machen.
        printTestResult("M3", std::abs(measured - 200.0f) < 0.001f, "LengthSensor misst 200.0mm");
    }

    // ==========================================
    // INTEGRATION TESTS (I1 - I3)
    // ==========================================

    // --- I1: GUI -> Calculator -> Sensor ---
    {
        ThicknessSettingGUI gui(10.0f); // Initialisiert
        LengthSensor sensor;
        SliceCountCalculator calc;
        
        // Vorbedingung: Sensor auf 50.0 eingestellt
        sensor.setSimulatedLength(50.0f);
        
        // Aktion 1: GUI übergibt Wert 2.5 (Simulieren wir direkt, da GUI keine setThickness hat, nutzen wir den Wert direkt)
        float thicknessInput = 2.5f; 

        // Aktion 2: Calculator ruft Sensor auf und berechnet
        int slices = calc.calculateCount(sensor, thicknessInput);

        // Erwartetes Ergebnis: 20 Scheiben (50 / 2.5)
        printTestResult("I1", slices == 20, "Integration: 50mm Brot / 2.5mm Dicke = 20 Scheiben");
    }

    // --- I2: GUI -> SafetyController (0.5 mm) ---
    {
        SafetyController sc;
        float inputThickness = 0.5f;

        // Aktion: Check
        bool isSafe = sc.checkStartCondition(inputThickness);

       
        printTestResult("I2", isSafe == true, "Integration: Dicke 0.5mm ist Grenzwert (Erlaubt im Code)");
    }

    // --- I3: GUI -> SafetyController (5.0 mm) ---
    {
        SafetyController sc;
        float inputThickness = 5.0f;

        // Aktion: Check
        bool isSafe = sc.checkStartCondition(inputThickness);

        // Erwartetes Ergebnis: Verarbeitung möglich (TRUE)
        printTestResult("I3", isSafe == true, "Integration: Dicke 5.0mm (Erlaubt)");
    }

    return 0;
}