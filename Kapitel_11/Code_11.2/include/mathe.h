/** @brief Klasse für mathematische Operationen
 *
 *  Detaillierte Beschreibung der Klasse
 */
class Mathe {

public:
    /** @brief Addiert die beiden Integers @p a und @p b
     *
     *  Detaillierte Beschreibung der Funktion
     *
     *  @param a erster Summand
     *  @param b zweiter Summand
     */
    int addieren(int a, int b);

    /** @brief Berechnet die Flaeche eines Rechtecks
     *
     *  Detaillierte Beschreibung der Funktion
     *
     *  @param a Laenge der ersten Rechtecksseite
     *  @param b Laenge der zweiten Rechtecksseite
     */
    int rechteck_flaeche(int a, int b);

    /** @brief Berechnet den Umfang eines Rechtecks
     *
     *  Detaillierte Beschreibung der Funktion
     *
     *  @param a Laenge der ersten Rechtecksseite
     *  @param b Laenge der zweiten Rechtecksseite
     */
    int rechteck_umfang(int a, int b);
};
