// liste.h
#ifndef LISTE_H
#define LISTE_H

#include <iostream>
using namespace std;
struct Element {
    int valeur;
    Element* suivant;

    Element(int val) : valeur(val), suivant(nullptr) {}
};

class Liste {
private:
    Element* premier; 

public:
    Liste() : premier(nullptr) {}
    ~Liste() {
        while (premier != nullptr) {
            supprimerDebut();
        }
    }
    void ajouterDebut(int val) {
        Element* nouveau = new Element(val);
        nouveau->suivant = premier;
        premier = nouveau;
        cout << "Ajout de " << val << " au début de la liste." << endl;
    }
    void supprimerDebut() {
        if (premier != nullptr) {
            Element* temp = premier;
            premier = premier->suivant;
            cout << "Suppression de " << temp->valeur << " du début de la liste." << endl;
            delete temp;
        } else {
            cout << "La liste est déjà vide." << endl;
        }
    }
    void afficher() const {
        if (premier == nullptr) {
            cout << "La liste est vide." << endl;
            return;
        }
        Element* courant = premier;
        cout << "Liste : ";
        while (courant != nullptr) {
            cout << courant->valeur << " ";
            courant = courant->suivant;
        }
        cout << endl;
    }
};

#endif
