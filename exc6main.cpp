#include<iostream>
#include"point.h"
using namespace std;
int main(){
    Point p(6.0,2.0);
    cout<<"position initiale :";
    p.afficher();
    p.deplace(2.5,-1.5);
    cout<<"apres deplacement:";
    p.afficher();
    return 0;
}