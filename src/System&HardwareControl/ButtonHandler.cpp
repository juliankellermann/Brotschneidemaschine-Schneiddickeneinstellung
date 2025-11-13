#include "ButtonHandler.h"
#include <iostream>

ButtonHandler::ButtonHandler(ThicknessSettingGUI &p_gui,
                             SafetyController &p_safety,
                             SliceCountCalculator &p_calculator,
                             LengthSensor &p_sensor,
                             DisplayRenderer &p_renderer)
    : gui(p_gui), safety(p_safety), calculator(p_calculator), sensor(p_sensor), renderer(p_renderer) {}

void ButtonHandler::triggerBusinessLogic()
{
    float currentThickness = gui.getThickness();

    // 1. Scheibenanzahl berechnen
    int sliceCount = calculator.calculateCount(sensor, currentThickness);

    // 2. Sicherheitsprüfung durchführen
    // thickness Wert wird an SafetyController übergeben
    bool isConditionOK = safety.checkStartCondition(currentThickness);

    
    // 3. Anzeige aktualisieren
    renderer.renderParameters(currentThickness, sliceCount, isConditionOK);
}


bool ButtonHandler::handleButtonPress(ButtonId buttonId)
{
    if (buttonId == ButtonId::INCREASE_THICKNESS)
    {
        gui.increaseThickness();
        triggerBusinessLogic();
        return true;
    }
    else if (buttonId == ButtonId::DECREASE_THICKNESS)
    {
        // Zuerst die Änderung an der GUI durchführen
        gui.decreaseThickness();

        // Da die GUI die Dicke eventuell auf einen Wert unter 0.5f setzt,
        // wird die Safety-Logik im triggerBusinessLogic diesen Zustand behandeln.
        triggerBusinessLogic();
        return true;
    }
}