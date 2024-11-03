#include "fichier.h"

int main() {
    Fichier* fichier = new Fichier();
    fichier->Creation(10); 
    fichier->Remplit('B');
    fichier->Affiche();
    delete fichier;

    return 0;
}
