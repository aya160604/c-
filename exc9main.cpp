#include "liste.h"
int main() {
    Liste maListe;
    maListe.ajouterDebut(10);
    maListe.ajouterDebut(20);
    maListe.ajouterDebut(30);
    maListe.afficher();
    maListe.supprimerDebut();
    maListe.afficher();
    maListe.supprimerDebut();
    maListe.afficher();
    maListe.supprimerDebut();
    maListe.afficher();
    maListe.supprimerDebut();

    return 0;
}
