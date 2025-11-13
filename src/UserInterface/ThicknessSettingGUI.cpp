#include "ThicknessSettingGUI.h"
#include <iostream>

ThicknessSettingGUI::ThicknessSettingGUI(float initialThickness)
    : currentThickness(initialThickness)
{}
float ThicknessSettingGUI::getThickness() const
{
    return currentThickness;
}
void ThicknessSettingGUI::increaseThickness()
{
    // Erhöht die Dicke um 0.5 mm
    currentThickness += THICKNESS_STEP;
}

void ThicknessSettingGUI::decreaseThickness()
{
    // Verringert die Dicke um 0.5 mm
    currentThickness -= THICKNESS_STEP;
}
