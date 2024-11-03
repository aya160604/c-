#include<iostream>
#include<string>
using namespace std;
class Animal {
    protected :
    string nom;
    int age;
    void set_value(string n,int a){
        nom=n;
        age=a;
        cout<<"le nom :"<<nom<<",l'age :"<<age<<endl;
    };
};
class Zebra : public Animal {
    public:
void set_value(string n,int a){
Animal :: set_value(n,a);
cout<<"lieu d'origine : Afrique. "<<endl;
}
};
class Dolphin : public Animal {
    public:
void set_value(string n,int a){
Animal :: set_value(n,a);
cout<<"lieu d'origine : occean. "<<endl;
}
};
main(){
    Zebra myzebra;
    Dolphin mydolphin;
    myzebra.set_value("zarzour",3);
    mydolphin.set_value("artimes",2);
    return 0;
}