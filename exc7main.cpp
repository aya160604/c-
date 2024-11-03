#include<iostream>
#include"pile.h"
using namespace std;
int main(){
    Pile p1,p2;
    p1.push(50);
    p1.push(30);
    p1.push(20);
    p2.push(60);
    p2.push(40);
    cout<<"depilage de la pile p1:";
    while(!p1.vide()){
        cout<<p1.pop()<<"";
    }
    cout<<endl;

    cout<<"depilage de la pile 2:";
    while(!p2.vide()){
        cout<<p2.pop()<<"";
    }
    cout<<endl;
    cout<<"tentative de depiler une pile vide :";
    p1.pop();
    return 0;
}