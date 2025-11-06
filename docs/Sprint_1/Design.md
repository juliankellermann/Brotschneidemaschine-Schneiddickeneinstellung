## Klassendiagramm
Klassendiagramm für die Requirements, die im ersten Sprint bearbeitet werden sollen
![Klassendiagramm](../referenziert/KlassenDiagramm.png)


## Sequenzdiagramm:
![Sequenzdiagramm](../referenziert/SequenzDiagramm.png)

## Kommunikationsdiagramm:
![Kommunikationsdiagramm](../referenziert/Kommunikationsdiagramm.png)

## Designpattern
| Klasse | Design-Pattern | Grund |
| :--- | :--- | :--- |
| **`SliceCountCalculator`** | **Adapter** | Übersetzt die von ThicknessSettingGUI erwartete Schnittstelle in die des vorhandenen Dienstes (`SliceCountHandlerServices`). Entkoppelt die Steuerung von der tatsächlichen Service-Implementierung und ermöglicht die Beschaffung notwendiger Daten (Länge) vor der Delegation. |
