#ifndef DISPLAYRENDERER_H
#define DISPLAYRENDERER_H


class DisplayRenderer {
public:
    /**
     * @brief Rendert die aktuell eingestellte Dicke und die berechnete Scheibenanzahl (BS-503).
     * @param thickness Die aktuell eingestellte Dicke in mm.
     * @param count Die berechnete Scheibenanzahl.
     * @param isSafetyOK Gibt an, ob die Startbedingungen erfüllt sind (wichtig für die Anzeige).
     */
    void renderParameters(float thickness, int count, bool isSafetyOK);
};

#endif 