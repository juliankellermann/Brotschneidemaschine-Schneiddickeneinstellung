#Traceabilitymatrix für sprint 1

| Requirement-ID | Jira-Issue | **Komponente** | Klasse(n) | Schnittstelle(n) | Testfall(e) |
| :---: | :---: | :---: | :---: | :---: | :---: |
| **1.1** | BS-101 | **User Interface (UI)** | ThicknessSettingGUI | getSetThickness() | I1, I2, I3 |
| **1.2** | BS-102 | **User Interface (UI)** | ButtonHandler, ThicknessSettingGUI | handleButtonPress(buttonID) | |
| **2.1** | BS-201 | **System & Hardware Services** | LengthSensor | measureLength() ||
| **2.3** | BS-203 | **Slicing & Business Logic** | LengthSensor | getCalibrationFactor() | I1, M3|
| **3.1** | BS-301 | **Slicing & Business Logic** | SliceCountCalculator | calculateSliceCount(length, thickness) | I1,M2|
| **4.1** | BS-401 | **Safety & Motor Control** | SafetyController | checkStartCondition(thickness) | I2, I3, M3 |
| **5.3** | BS-503 | **User Interface (UI)** | DisplayRenderer | renderParameters(thickness, count) |  |
