#include<iostream>
#include"point.h"
using namespace std;
Point:: Point(float x,float y):x(x),y(y){}
void Point::deplace(float dx, float dy){
    x+=dx;
    y+=dy;
}
void Point::afficher()const{
    cout<<"coordonnees du point : ("<<x<<","<<y<<")"<<endl;
}