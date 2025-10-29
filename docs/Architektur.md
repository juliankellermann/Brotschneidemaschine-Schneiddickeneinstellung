#Architektur

**Schichtenarchitektur**:



- Trennung der Verantwortlichkeiten (Hardwarenahe-Funktionen wie Spannung messen, Anwendungslogik wie Kalibrierung und
  Ladezustandsberechnung, Benutzeroberfläche)
- Jede Schicht ist unabhängig testbar und austauschbar
- Segmente nach funktionaler Rolle gruppiert → Kapselung und Entkopplung der Anwendung
- Jede Schicht darf nur die direkt darunterliegende Schicht ansprechen.
  -Es gibt keine Rückwärtssprünge oder Querkommunikation.

  


##Komponentendiagramm


![Komponenten Diagramm](referenziert/Komponentendiagramm.png)

| | **Komponente** | **Requirements** |
|:-:|:---|:---|
| 4 | **User Interface (UI)** | Req. 1.1, Req. 1.2, Req. 1.3, Req. 1.4, Req. 5.1, Req. 5.2, Req. 5.3, Req. 5.4, Req. 5.5, Req. 5.6 |
| 3 | **Bread slicer logic (Anwendungslogik/Core)** | Req. 1.5, Req. 1.6, Req. 2.3, Req. 3.1, Req. 4.1, Req. 4.2, Req. 4.3, Req. 4.4 |
| 2 | **Hardware Abstraction** | Req. 2.1, Req. 2.2 |
| 1 | **Persistence Manager** | Req. 2.2 |




**Verantwortlichkeiten der Komponenten:**

| **Komponente** | **Rolle** | **Verantwortlichkeiten** |
|:---|:---|:---|
| **User Interface (UI)** | Schnittstelle zum Benutzer | Aktualisierung des Zustands; Sicherstellung der Benutzerfreundlichkeit und Klarheit der Darstellung. |
| **Bread slicer logic (Anwendungslogik/Core)** | Geschäftslogik und Steuerung | Berechnen der Scheibenanzahl; Steuern des Mess- und Schneidprozesses; Validieren von Eingabewerten; Auslösen von Warnungen bei Grenzwertverletzung. |
| **Hardware Abstraction** | Bindeglied zur Sensorik | Liefern der Messwerte (Länge des Brotes); Gewährleistung der Messgenauigkeit; Echtzeit-Datenerfassung. |
| **Persistence Manager** |Datenverwaltung|  Temporäres Speichern von Messdaten|


##  Traceability-Matrix für Brotschneidemaschine

| Requirement-ID | Jira-Issue | Komponente | Klasse(n) | Schnittstelle(n) | Testfall(e) |
| :---: | :---: | :---: | :---: | :---: | :---: |
| **1.1** | BS-101 | **userInterface** | ThicknessSettingGUI | getSetThickness() | UT-1.1, SIT-1.1 |
| **1.2** | BS-102 | **userInterface** | ButtonHandler, ThicknessSettingGUI | handleButtonPress(buttonID) | UT-1.2, SIT-1.2 |
| **1.3** | BS-103 | **userInterface** | InputValidation | validateInputSize() | UT-1.3 |
| **1.4** | BS-104 | **userInterface** | ButtonHandler | validateButtonFunction() | UT-1.4 |
| **1.5** | BS-105 | **businessLogic** | SlicingParameterController | calculateNextThickness(current, step) | UT-1.5, SIT-1.5 |
| **1.6** | BS-106 | **userInterface** | ButtonHandler | checkHoldDuration(buttonID) | UT-1.6 |
| **2.1** | BS-201 | **hardwareAbstraction** | LengthSensor | measureLength() | UT-2.1, SIT-2.1 |
| **2.2** | BS-202 | **persistenceManager** | MeasurementStorage | saveLengthValue(value) | UT-2.2 |
| **2.3** | BS-203 | **hardwareAbstraction** | LengthSensor | getCalibrationFactor() | UT-2.3, SIT-2.3 |
| **3.1** | BS-301 | **businessLogic** | SliceCountCalculator | calculateSliceCount(length, thickness) | UT-3.1, SIT-3.1 |
| **3.2** | BS-302 | **businessLogic** | CalculationEngine | getCalculationTime() | UT-3.2 |
| **3.3** | BS-303 | **businessLogic** | ResourceMonitor | checkCPUUsage() | UT-3.3 |
| **4.1** | BS-401 | **safetyLogic** | SafetyController | checkStartCondition(thickness) | UT-4.1, SIT-4.1 |
| **4.2** | BS-402 | **safetyLogic** | SafetyController | checkDomainViolation(value) | UT-4.2, SIT-4.2 |
| **4.3** | BS-403 | **motorControl** | MotorController | validateMinThickness(thickness) | UT-4.3 |
| **4.4** | BS-404 | **motorControl** | MotorController | validateMaxThickness(thickness) | UT-4.4 |
| **5.1** | BS-501 | **userInterface** | DisplayController | activateDisplay() | UT-5.1, SIT-5.1 |
| **5.2** | BS-502 | **userInterface** | DisplayController | refreshDisplay() | UT-5.2 |
| **5.3** | BS-503 | **userInterface** | DisplayRenderer | renderParameters(thickness, count) | UT-5.3, SIT-5.3 |
| **5.4** | BS-504 | **userInterface** | DisplayRenderer | setBrightness(level) | UT-5.4 |
| **5.5** | BS-505 | **userInterface** | DisplayController | updateRealtime() | UT-5.5 |
| **5.6** | BS-506 | **userInterface** | DisplayRenderer | checkFontAccessibility() | UT-5.6 |