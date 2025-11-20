## Traceability-Matrix

| Requirement-ID | Jira-Issue | **Komponente** | Klasse(n) | Schnittstelle(n) | Testfall(e) | **Sprint** |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **1.1 🟢** | BS-101 | **User Interface (UI)** | ThicknessSettingGUI | getSetThickness() | I1, I2, I3 | **Sprint 1** |
| **1.2 🟢** | BS-102 | **User Interface (UI)** | ButtonHandler, ThicknessSettingGUI | handleButtonPress(buttonID) | | **Sprint 1** |
| **1.3** | BS-103 | **User Interface (UI)** | InputValidation | validateInputSize() | |  |
| **1.4** | BS-104 | **User Interface (UI)** | ButtonHandler | validateButtonFunction() | |  |
| **1.5** | BS-105 | **Slicing & Business Logic** | SlicingParameterController | calculateNextThickness(current, step) |  |  |
| **1.6** | BS-106 | **User Interface (UI)** | ButtonHandler | checkHoldDuration(buttonID) |  |  |
| **2.1 🟢** | BS-201 | **System & Hardware Services** | LengthSensor | measureLength() || **Sprint 1** |
| **2.2** | BS-202 | **System & Hardware Services** | MeasurementStorage | saveLengthValue(value) | |  |
| **2.3🟢** | BS-203 | **Slicing & Business Logic** | LengthSensor | getCalibrationFactor() | I1, M3|**Sprint 1**  |
| **3.1 🟢** | BS-301 | **Slicing & Business Logic** | SliceCountCalculator | calculateSliceCount(length, thickness) | I1,M2| **Sprint 1** |
| **3.2** | BS-302 | **Slicing & Business Logic** | CalculationEngine | getCalculationTime() ||  |
| **3.3** | BS-303 | **Slicing & Business Logic** | ResourceMonitor | checkCPUUsage() |  |  |
| **4.1 🟢** | BS-401 | **Safety & Motor Control** | SafetyController | checkStartCondition(thickness) | I2, I3, M3 | **Sprint 1** |
| **4.2** | BS-402 | **Safety & Motor Control** | SafetyController | checkDomainViolation(value) |  |  |
| **4.3** | BS-403 | **Safety & Motor Control** | MotorController | validateMinThickness(thickness) ||  |
| **4.4** | BS-404 | **Safety & Motor Control** | MotorController | validateMaxThickness(thickness) |  |  |
| **5.1** | BS-501 | **User Interface (UI)** | DisplayController | activateDisplay() | |  |
| **5.2** | BS-502 | **User Interface (UI)** | DisplayController | refreshDisplay() |  |  |
| **5.3 🟢** | BS-503 | **User Interface (UI)** | DisplayRenderer | renderParameters(thickness, count) |  | **Sprint 1** |
| **5.4** | BS-504 | **User Interface (UI)** | DisplayRenderer | setBrightness(level) |  |  |
| **5.5** | BS-505 | **User Interface (UI)** | DisplayController | updateRealtime() |  |  |
| **5.6** | BS-506 | **User Interface (UI)** | DisplayRenderer | checkFontAccessibility() |  |  |



