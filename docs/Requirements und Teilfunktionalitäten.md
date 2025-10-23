# Requirements und Teilfunktionalitäten der Brotschneidemaschine

## Teilfunktionalitäten

* Eingabe der Schneidicke
* Messen der Länge des Brotes
* Berechnung der Scheibenanzahl
* Minimale und maximale Einstellung der Schneidicke
* Anzeige der ausgewählten Dicke und der Menge an Brotscheiben



---

## 1. Funktionale Requirements



| Nr. | Jira-Referenz | Titel | Beschreibung |
| :--- | :--- | :--- | :--- |
| 1.1 | | Eingabe der Schneiddicke | Der Benutzer kann die Schneiddicke einstellen. |
| 1.2 | | Einstellung über +/- Buttons | Der Benutzer kann die Schneiddicke mit einem Plus- und einem Minus-Button einstellen. |
| 2.1 | | Automatische Längenmessung | Die Länge des Brotes wird automatisch gemessen. |
| 2.2 | | Speicherung der Messwerte | Die Messwerte der Brotlänge werden gespeichert. |
| 3.1 | | Zuverlässige Scheibenanzahlberechnung | Die Menge der Brotscheiben wird zuverlässig berechnet. |
| 4.1 | | Grenzwert-Startschutz | Sobald ein Wert die definierte Minimal- oder Maximalgrenze über- oder unterschreitet, kann das Gerät nicht gestartet werden. |
| 4.2 | | Warnung bei Definitionsmenge | Sobald ein Wert die Definitionsmenge über- oder unterschreitet, wird eine Warnung ausgegeben. |
| 5.1 | | Display-Aktivierung | Beim Drücken eines Buttons wird das Display eingeschaltet. |
| 5.2 | | Aktualisierung der Anzeige | Die Anzeige wird bei jeder Benutzerinteraktion automatisch aktualisiert. |
| 5.3 | | Anzeige der Parameter | Die eingestellte Dicke und die berechnete Menge an Brotscheiben werden angezeigt. |

---

## 2. Nicht-funktionale Requirements



| Nr. | Jira-Referenz | Titel | Beschreibung |
| :--- | :--- | :--- | :--- |
| 1.3 | | Button-Größe und Bedienung | Die Buttons sind ausreichend groß und einfach zu bedienen. |
| 1.4 | | Intuitive Button-Funktion | Die Funktion der Buttons ist intuitiv und klar erkennbar. |
| 1.5 | | Schrittweite der Dicke | Die Dicke der Brotscheiben ist mit einer Schrittweite von 0,5 mm einstellbar. |
| 1.6 | | Schnell-Einstellung | Bei längerem Halten der Knöpfe wird die Scheibendicke schneller verändert. |
| 2.3 | | Messgenauigkeit Brotlänge | Die Bestimmung der Brotlänge erfolgt mit möglichst hoher Genauigkeit. |
| 3.2 | | Echtzeit-Berechnung | Die Berechnung erfolgt in Echtzeit und ohne wahrnehmbare Verzögerung. |
| 3.3 | | Ressourcenschonende Berechnung | Die Berechnung soll nur minimale Rechenleistung beanspruchen. |
| 4.3 | | Min. Dicke Klingenschutz | Die minimale Einstellung von 0,5 mm darf die Klinge nicht in Kontakt mit dem Anschlag bringen. |
| 4.4 | | Max. Dicke Überlastschutz | Die maximale Einstellung von 25 mm muss gegen Überlast gesichert sein. |
| 5.3 | | Klarheit der Anzeige | Die Werte werden in klar verständlicher Form dargestellt. |
| 5.4 | | Helligkeit der Anzeige | Die Anzeige ist gut lesbar und weder zu hell noch zu dunkel. |
| 5.5 | | Echtzeit-Aktualisierung | Die Anzeige wird in Echtzeit bei jeder Eingabe aktualisiert. |
| 5.6 | | Barrierefreie Schrift | Die Schrift ist auch für farbenblinde Personen oder Nutzer mit eingeschränktem Sehvermögen gut erkennbar. |
