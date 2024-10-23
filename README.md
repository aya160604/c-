#include <iostream>
#include<string>
using namespace std;
class Voiture {
    public:
    string marque;
    string modele;
    int annee_de_fabrication;
    float kilometrage;
    float vitesse;
    //construction par defaut
   Voiture(){
     marque="Inconnu";
     modele="Inconnu";
     annee_de_fabrication=0;
     kilometrage=0.0;
     vitesse=0.0;
   }
   //constructeur avec parametres 
   Voiture(string ma,string mo,int a, float k, float v){
    marque=ma;
    modele=mo;
    annee_de_fabrication=a;
    kilometrage=k;
    vitesse=v;
   }
   //methode pour accelerer 
   void accelerer(float val){
    vitesse+=val;
    cout<<"la voiture accelerer de"<<val<<"km/h. La vitesse actuelle :"<<vitesse<<"km/h."<<endl;
   }
   //methode pour freiner
   void freiner(float val){
    if(vitesse-val<0){
        vitesse=0;
    }else{
        vitesse-=val;
    }
    cout<<"la voiture freine de"<<val<<"km/h. La vitesse actuelle:"<<vitesse<<"km/h."<<endl;
    } 
//methode pour afficher les infos
void afficherInfo(){
cout<<"marque:"<<marque<<endl;
cout<<"modele:"<<modele<<endl;
cout<<"annee:"<<annee_de_fabrication<<endl;
cout<<"kilometrage:"<<kilometrage<<endl;
cout<<"vitesse:"<<vitesse<<endl;
}
//methode pour avancer
void avancer(float distance){
    kilometrage+=distance;
    cout<<"la voiture a avance de"<<distance<<"km.Kilometrage actuel:"<<kilometrage<<"km."<<endl;
}
//destructeur
Voiture(){
    cout<<"la voiture"<<marque<<""<<modele<<"est detruite."<<endl;
}
};
int main(){
     Voiture voiture1;
    voiture1.afficherInfo();
    voiture1.marque = "Tesla";
    voiture1.modele = "Model S";
    voiture1.annee_de_fabrication = 2022;
    voiture1.kilometrage = 500;
    voiture1.vitesse = 80;
    voiture1.afficherInfo();
    voiture1.accelerer(20);
    voiture1.freiner(50);
    voiture1.avancer(100);
    return 0;
}
