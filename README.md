## Hardwarenahe-Programmierung---Tag-1

In dieser Übung decken wir die Grundlagen der C-Programmierung ab, insbesondere Funktionen,  Arrays, Pointer und Unit-Tests.


# Aufgabe 1 Funktionen

(a) Erstellen Sie eine Funktion separable(int a), die testet, ob a durch drei teilbar ist. Falls a
durch drei teilbar ist, soll 1 als Ruckgabewert ubergeben werden, andernfalls 0.

(b) Schreiben Sie ein Programm, das mit Ihrer Funktion aus (a) eine Zahl x testet und dem Benutzer
am Bildschirm eine Meldung ausgibt, ob die Zahl durch drei teilbar ist. Dabei soll der Benutzer
nach Programmstart aufgefordert werden, die Zahl x einzugeben. Beispiel:
Geben Sie eine Zahl ein: 35
-------------------------------------
Die Zahl ist nicht durch drei teilbar!

# Aufgabe 2 Pointer und Arrays

(a) Schreiben Sie ein Programm, das 10 Messwerte (jeweils vom Typ float) von der Konsole in ein
Array einliest und den Inhalt des Arrays anschließend ausgibt.

(b) Falls Sie in Ihrer L¨osung eckige Klammern, also [], fur die Lese- und Schreibzugriffe auf das
Array verwendet haben, schreiben Sie Ihr Programm so um, dass es stattdessen Pointerzugriffe
verwendet! Verwenden Sie eckige Klammern hier also nur noch zur Deklaration des Arrays.

# Aufgabe 3 Pointer und Funktionen

Schreiben Sie ein Programm, in dem zwei double Zahlen von der Tastatur eingelesen und in lokalen
Variablen gespeichert werden. Die Werte der Variablen sollen anschließend in einer Funktion namens
swap miteinander vertauscht werden. Geben Sie die beiden Variablen vor und nach dem Aufruf von
swap auf dem Bildschirm aus.

# Aufgabe 4 Unittests

In dieser Aufgabe sollen Sie die Funktionalitat von vorgegebenen C-Funktionen mittels des Unit-Test
Frameworks check uberprufen. Schauen Sie sich dazu zunachst die vorgegebenen Unittests in der Datei
simpleString tests.ts zur Implementierung in simpleString.c an, welche ihnen zeigen, wie solche
Tests aussehen konnen.

(a) Bauen Sie die Tests und fuhren Sie sie aus (entsprechend der Anleitung im ILIAS-Lernmodul).
Die fehlschlagenden Tests helfen Ihnen, Fehler in der von uns bereitgestellten Implementierung
zu erkennen. Sie sollten verstehen, was die Ausgabe der Tests bedeutet.

(b) Korrigieren Sie im Anschluss die Fehler in der Implementierung und demonstrieren Sie, dass nun
alle Tests erfolgreich durchlaufen. Die Tests selbst sollten Sie nicht verandern!
Folgende C-Funktionen sind gestellt:
• eine Funktion int my_strlen(char *string), die die L¨ange des ubergebenen Strings zuruck-
geben soll.
• eine Funktion int is_string(char *string, int len), die 1 zuruckgeben soll, wenn das
ubergebene char Array der L¨ange len ein String ist, und 0 sonst.

# Aufgabe 5 Pointer und Funktionen

In dieser Aufgabe sollen Sie ein Programm schreiben, das einen Kaugummi-Automaten reprasentiert.
In der hochgeladenen Datei kaugummi.c finden Sie einige vorgegebene Funktionsprototypen. Mit Ausnahme der print kaugummi-Funktion sind diese noch nicht implementiert.
Eine Kaugummi kostet 20 Cent und der Automat verfugt zu Beginnuber 1000 Kaugummis.
Das Programm soll wie folgt ablaufen:

1. Der Automat fragt den Benutzer, wie viele Kaugummis gekauft werden sollen. Sie durfen davon
ausgehen, dass nur ganze Zahlen eingegeben werden.
2. Danach verringert der Automat die Anzahl der Kaugummis und erh¨oht den Geldstand entsprechend. Außerdem gibt der Automat die Kaugummis aus. Fur die Ausgabe der Kaugummis soll 
die vorgegebene Funktion verwendet werden. Fur den Fall, dass der Benutzer mehr Kaugummis
anfragt, als ubrig sind, mussen Sie sich ein sinnvolles Verhalten des Automaten uberlegen.
3. Wenn danach die Geldkassette mit 50 Euro EUR gefullt ist, gibt der Automat zusatzlich eine
Meldung aus, dass die Kassette geleert werden soll.
4. Wenn keine Kaugummis mehr verfugbar sind, beendet der Automat sich mit einer entsprechen-
den Meldung. Sonst kehrt er zu Schritt 1 zuruck.
