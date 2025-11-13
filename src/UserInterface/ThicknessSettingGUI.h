#ifndef THICKNESSSETTINGGUI_H
#define THICKNESSSETTINGGUI_H

class ThicknessSettingGUI
{
public:
    const float THICKNESS_STEP = 0.5f;

    // Standard-Startwert für die Dicke
    ThicknessSettingGUI(float initialThickness = 10.0f);

    //Ruft die aktuell eingestellte Dicke ab
    // gibt die aktuelle Schneiddicke in mm zurück
    float getThickness() const;

    //Erhöht die Schneiddicke um die Schrittweite.
    void increaseThickness();
    
    //Verringert die Schneiddicke um die Schrittweite.
    void decreaseThickness();

private:
    float currentThickness;
};
#endif