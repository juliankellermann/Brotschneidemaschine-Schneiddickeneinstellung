#ifndef SAFETYCONTROLLER_H
#define SAFETYCONTROLLER_H

class SafetyController
{
public:
    /** Prüft, ob die eingestellte Schneiddicke innerhalb der grenzwerte liegt
     * wenn ja, gibt true zurück, sonst false
     */
    bool checkStartCondition(float thickness);

private:
// Grenzwerte basierend auf BS-403 (Min. Dicke 0.5 mm) und BS-404 (Max. Dicke 25 mm)
    const float MIN_THICKNESS = 0.5f;
    const float MAX_THICKNESS = 25.0f;
};
#endif