#ifndef PILE_H
#define PILE_H
#include<vector>
#include<iostream>
using namespace std;
class Pile{
    private:
    vector<int>elements;
    public:
    Pile(){}
    void push(int val){
        elements.push_back(val);
    }
    int pop(){
        if(elements.empty()){
            cout<<"erreur : la pile est vide."<<endl;
            return -1;
        }
        int sommet=elements.back();
        elements.pop_back();
        return sommet;
    }
    bool vide()const{
        return elements.empty();
    }
};
#endif