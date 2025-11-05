## Traceability-Matrix

| Requirement-ID | Jira-Issue | **Komponente** | Klasse(n) | Schnittstelle(n) | Testfall(e) | **Sprint** |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **1.1 🟢** | BS-101 | **User Interface (UI)** | ThicknessSettingGUI | getSetThickness() | UT-1.1, SIT-1.1 | **Sprint 1** |
| **1.2 🟢** | BS-102 | **User Interface (UI)** | ButtonHandler, ThicknessSettingGUI | handleButtonPress(buttonID) | UT-1.2, SIT-1.2 | **Sprint 1** |
| **1.3** | BS-103 | **User Interface (UI)** | InputValidation | validateInputSize() | UT-1.3 |  |
| **1.4** | BS-104 | **User Interface (UI)** | ButtonHandler | validateButtonFunction() | UT-1.4 |  |
| **1.5** | BS-105 | **Slicing & Business Logic** | SlicingParameterController | calculateNextThickness(current, step) | UT-1.5, SIT-1.5 |  |
| **1.6** | BS-106 | **User Interface (UI)** | ButtonHandler | checkHoldDuration(buttonID) | UT-1.6 |  |
| **2.1 🟢** | BS-201 | **System & Hardware Services** | LengthSensor | measureLength() | UT-2.1, SIT-2.1 | **Sprint 1** |
| **2.2** | BS-202 | **System & Hardware Services** | MeasurementStorage | saveLengthValue(value) | UT-2.2 |  |
| **2.3** | BS-203 | **Slicing & Business Logic** | LengthSensor | getCalibrationFactor() | UT-2.3, SIT-2.3 |  |
| **3.1 🟢** | BS-301 | **Slicing & Business Logic** | SliceCountCalculator | calculateSliceCount(length, thickness) | UT-3.1, SIT-3.1 | **Sprint 1** |
| **3.2** | BS-302 | **Slicing & Business Logic** | CalculationEngine | getCalculationTime() | UT-3.2 |  |
| **3.3** | BS-303 | **Slicing & Business Logic** | ResourceMonitor | checkCPUUsage() | UT-3.3 |  |
| **4.1 🟢** | BS-401 | **Safety & Motor Control** | SafetyController | checkStartCondition(thickness) | UT-4.1, SIT-4.1 | **Sprint 1** |
| **4.2** | BS-402 | **Safety & Motor Control** | SafetyController | checkDomainViolation(value) | UT-4.2, SIT-4.2 |  |
| **4.3** | BS-403 | **Safety & Motor Control** | MotorController | validateMinThickness(thickness) | UT-4.3 |  |
| **4.4** | BS-404 | **Safety & Motor Control** | MotorController | validateMaxThickness(thickness) | UT-4.4 |  |
| **5.1** | BS-501 | **User Interface (UI)** | DisplayController | activateDisplay() | UT-5.1, SIT-5.1 |  |
| **5.2** | BS-502 | **User Interface (UI)** | DisplayController | refreshDisplay() | UT-5.2 |  |
| **5.3 🟢** | BS-503 | **User Interface (UI)** | DisplayRenderer | renderParameters(thickness, count) | UT-5.3, SIT-5.3 | **Sprint 1** |
| **5.4** | BS-504 | **User Interface (UI)** | DisplayRenderer | setBrightness(level) | UT-5.4 |  |
| **5.5** | BS-505 | **User Interface (UI)** | DisplayController | updateRealtime() | UT-5.5 |  |
| **5.6** | BS-506 | **User Interface (UI)** | DisplayRenderer | checkFontAccessibility() | UT-5.6 |  |



