#ifndef ButtonHandler_H
#define ButtonHandler_H

#include "../UserInterface/ThicknessSettingGUI.h"
#include "../Safety&MotorControl/SafetyController.h"
#include "../Slicing&BusinessLogic/SliceCountCalculator.h"
#include "../UserInterface/DisplayRenderer.h"
#include "LengthSensor.h"

// Definieren von Button IDs für die Handler-Logik
enum class ButtonId
{
    INCREASE_THICKNESS = 1,
    DECREASE_THICKNESS = 2,
};
class ButtonHandler
{
public:
// Der ButtonHandler muss alle Komponenten kennen, die er steuert oder abfragt.
    ButtonHandler(ThicknessSettingGUI &thicknessGUI,
                  SafetyController &safetyController,
                  SliceCountCalculator &sliceCalculator,
                  LengthSensor &lengthSensor, // LengthSensor wird für die calculateCount-Methode benötigt
                  DisplayRenderer& renderer);

    
    //Verarbeitet den Tastendruck basierend auf der ButtonId
    //gibt true zurück, wenn der Tastendruck verarbeitet wurde und das Display aktualisiert wurde
    bool handleButtonPress(ButtonId buttonId);

private:
    ThicknessSettingGUI &gui;
    SafetyController &safety;
    SliceCountCalculator &calculator;
    LengthSensor &sensor;
    DisplayRenderer& renderer;

    void triggerBusinessLogic();
};

#endif