## Traceability-Matrix (Priorisiert)

| Requirement-ID | Jira-Issue | **Komponente** | Klasse(n) | Schnittstelle(n) | Testfall(e) | Priorität |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **1.1** | BS-101 | **User Interface (UI)** | ThicknessSettingGUI | getSetThickness() | UT-1.1, SIT-1.1 | **MUSS** |
| **1.2** | BS-102 | **User Interface (UI)** | ButtonHandler, ThicknessSettingGUI | handleButtonPress(buttonID) | UT-1.2, SIT-1.2 | **MUSS** |
| **2.1** | BS-201 | **System & Hardware Services** | LengthSensor | measureLength() | UT-2.1, SIT-2.1 | SOLL |
| **3.1** | BS-301 | **Slicing & Business Logic** | SliceCountCalculator | calculateSliceCount(length, thickness) | UT-3.1, SIT-3.1 | SOLL |
| **4.1** | BS-401 | **Safety & Motor Control** | SafetyController | checkStartCondition(thickness) | UT-4.1, SIT-4.1 | SOLL |
| **5.3** | BS-503 | **User Interface (UI)** | DisplayRenderer | renderParameters(thickness, count) | UT-5.3, SIT-5.3 | **MUSS** |
