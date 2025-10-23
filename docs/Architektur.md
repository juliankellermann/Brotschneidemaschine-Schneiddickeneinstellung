#Architektur

**Schichtenarchitektur**:



- Trennung der Verantwortlichkeiten (Hardwarenahe-Funktionen wie Spannung messen, Anwendungslogik wie Kalibrierung und
  Ladezustandsberechnung, Benutzeroberfläche)
- Jede Schicht ist unabhängig testbar und austauschbar
- Segmente nach funktionaler Rolle gruppiert → Kapselung und Entkopplung der Anwendung
- Jede Schicht darf nur die direkt darunterliegende Schicht ansprechen.
  -Es gibt keine Rückwärtssprünge oder Querkommunikation.

  


##Komponentendiagramm


![Komponentendiagramm](..docs/referenziert/Komponenten Diagramm.png)

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
