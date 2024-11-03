#include<iostream>
using namespace std;
 
 class Test{
    private:
    static int compteur;
    public :
    void call(){
        compteur++;
        cout<<"appel de la fonction call.Nombre d'appels :"<<compteur<<endl;
    }
    static int getcompteur(){
        return compteur;
    
    }
 };
 int Test ::compteur=0;
 int main(){
    Test t1,t2;
    t1.call(); 
    t1.call();
    t1.call();
    t1.call();
    t2.call();
    t2.call();
    t2.call();
    t2.call();
    cout<<"nombre d'appels a la fonction call est :"<<Test::getcompteur()<<endl;
    return 0;
 }