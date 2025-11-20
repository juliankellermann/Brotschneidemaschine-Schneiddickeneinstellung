## Tests auf Integrationsebene

| Testfall-ID | Module | Vorbedingung (Pre-Condition) | Aktion (Action) | Erwartetes Ergebnis (Expected Result) |
| :---------- | :----------------------------- | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **I1** | `thicknessSettingGUI`, `SliceCountCalculator`, `LengthSensor` | Alle Module sind initialisiert. `LengthSensor` ist auf feste Länge von **50.0** eingestellt. | 1. `thicknessSettingGUI` übergibt thickness Wert **2.5** an den `SliceCountCalculator` (Schritte 2 & 3 des Sequenzdiagramms). 2. `SliceCountCalculator` ruft `LengthSensor` auf und erhält **50.0**. | 1. `SliceCountCalculator` berechnet und liefert **20** Scheiben zurück (Schritte 3 & 4). 2. `thicknessSettingGUI` hat den Wert **20** erhalten. |
| **I2** | `thicknessSettingGUI`, `SafetyController` | Beide Module sind initialisiert. Der sichere Dickenbereich sei definiert als **$1.0 \le thickness \le 10.0$**. | `thicknessSettingGUI` übergibt den thickness Wert **0.5** an den `SafetyController` (Schritt 5 des Sequenzdiagramms). | `SafetyController` entscheidet, dass die Dicke **NICHT** verarbeitet werden kann (Schritt 6). Das System bleibt im sicheren Zustand, Verarbeitung wird verhindert. |
| **I3** | `thicknessSettingGUI`, `SafetyController` | Beide Module sind initialisiert. Der sichere Dickenbereich sei definiert als **$1.0 \le thickness \le 10.0$**. | `thicknessSettingGUI` übergibt den thickness Wert **5.0** an den `SafetyController` (Schritt 5 des Sequenzdiagramms). | `SafetyController` entscheidet, dass die Dicke **verarbeitet werden kann** (Schritt 6). Die Verarbeitung kann fortgesetzt werden. |





| Testfall-ID | Module | Vorbedingung (Pre-Condition) | Aktion (Action) | Erwartetes Ergebnis (Expected Result) |
| **M5** | `SafetyController` | Modul ist initialisiert. Der sichere Dickenbereich sei als **$1.0 \le T \le 10.0$** definiert. | Aufruf der Prüfung mit dem Wert **T=1.0** (untere Grenzbedingung). | Rückgabe: **TRUE** (Verarbeitung der Dicke ist erlaubt). |

