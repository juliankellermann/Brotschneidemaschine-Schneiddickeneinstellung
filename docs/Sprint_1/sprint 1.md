# Abweichungen:

In ButtonHandler.cpp SliceCountCalculator.h und .cpp calculateCount müsste calculateSliceCount heißen.

# Erkentnisse und Verbesserungen
Obwohl die aktuelle Implementierung funktional vollständig ist und alle Anforderungen erfüllt, habe ich während der Entwicklung Potenziale zur Steigerung der Softwarequalität identifiziert, die ich in den kommenden Sprints adressieren werde.

1.Architektur: Entkopplung durch Interfaces Aktuell nutzen meine Klassen (z. B. SliceCountCalculator) direkt die konkreten Implementierungen der Hardware-Komponenten (z. B. LengthSensor). Dies funktioniert im Betrieb einwandfrei, erschwert jedoch isolierte Unit-Tests, da ich für Testzwecke Eingriffe in den Produktionscode vornehmen musste (z. B. Setter für simulierte Werte).

Plan: Einführung von Interfaces (Abstrakten Klassen) für alle Hardware-Treiber.
Ziel: Dies ermöglicht die Anwendung des Dependency Inversion Principles. Ich kann dann im Testbetrieb "Mock-Objekte" verwenden, ohne den produktiven Code zu verändern.
<br>
<br>

2.Design-Konsistenz & Traceability Im Laufe der Implementierung hat sich der Code an einigen Stellen weiterentwickelt als ursprünglich im Design vorgesehen. Ein Beispiel ist der DisplayRenderer, der funktional erweitert wurde, um auch den Sicherheitsstatus (isSafetyOK) zu visualisieren. Auch weichen einzelne Methodennamen im Code leicht von der Planung ab.

Plan: Durchführung eines Re-Engineering-Schritts, um die UML-Diagramme und die Traceability-Matrix an den tatsächlichen, funktionierenden Code anzupassen.
Ziel: Sicherstellung einer lückenlosen Übereinstimmung zwischen Dokumentation und Code ("Single Source of Truth"), um die langfristige Wartbarkeit zu gewährleisten.



# Baseline: Projektstand Ende Sprint 1

Zum aktuellen Zeitpunkt habe ich eine stabile und funktionale Softwareversion erreicht. Die Implementierung bildet die Kernlogik der Brotschneidemaschine ab.

Funktionaler Umfang: Das System ermöglicht die Simulation des Schneideprozesses. Über eine simulierte GUI (ThicknessSettingGUI) kann die Schnittdicke eingestellt werden. Ein ButtonHandler orchestriert den Ablauf: Er fordert Messdaten vom LengthSensor an, lässt die Scheibenanzahl durch den SliceCountCalculator berechnen und validiert den Start über den SafetyController. Die Ergebnisse werden über den DisplayRenderer ausgegeben.

Architektur & Qualität: Die Software folgt einer modularen Architektur mit klarer Trennung der Verantwortlichkeiten (User Interface, Business Logic, Safety & Hardware Control). Die Abhängigkeiten werden sauber über Dependency Injection im ButtonHandler aufgelöst. Die Korrektheit der Implementierung wird durch eine Suite von automatisierten Tests (main.cpp) sichergestellt, die sowohl Unit-Tests der Einzelkomponenten als auch die Integrationsszenarien (I1–I3) erfolgreich abdecken. Die Nachverfolgbarkeit zu den Anforderungen (Traceability) ist gegeben.

