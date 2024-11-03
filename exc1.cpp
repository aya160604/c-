#include<iostream>
using namespace std;
class Complexe {
    private :
    double re;
    double im;
    public :
    Complexe(double r=0,double i=0) : re(r),im(i){}
    void afficher() const{
        cout<<re<<"+"<<im<<"i"<<endl;
    }
    bool egal(const Complexe &autre) const {
        return( re == autre.re)&&(im == autre.im);
    }
    Complexe addition(const Complexe &autre)const{
        return Complexe(re+autre.re,im+autre.im);
    }
     Complexe soustraction(const Complexe &autre)const{
        return Complexe(re-autre.re,im-autre.im);
    }
     Complexe multiplication(const Complexe &autre)const{
       double real=re*autre.re-im*autre.im;
       double imag=re*autre.re+im*autre.im;
        return Complexe(real,imag);
    }
     Complexe division(const Complexe &autre)const{
        double denominateur = autre.re*autre.re+autre.im*autre.im;
        double real=(re*autre.re+im*autre.im)/denominateur;
        double imag=(re*autre.re-im*autre.im)/denominateur;
        return Complexe(real,imag);
    }
};

int main(){
    double re1,im1,re2,im2;
    int choix;
    cout<<"entrer la partie reelle du premier nbre complexe";
    cin>>re1;
    cout<<"entrer la partie imaginaire du premier nbre complexe";
    cin>>im1;
    cout<<"entrer la partie reelle du deuxieme nbre complexe";
    cin>>re2;
    cout<<"entrer la partie imaginaire du deuxieme nbre complexe";
    cin>>im2;
    Complexe nbre1(re1,im1);
    Complexe nbre2(re2,im2);
    cout<<"\nchoisissez l'operation:\n";
    cout<<"1.egalite\n";
    cout<<"2.addition\n";
    cout<<"3.soustraction\n";
    cout<<"4.multiplication\n";
    cout<<"5.division\n";
    cout<<"votre choix:";
    cin>>choix;
    switch(choix){
        case 1:
        if(nbre1.egal(nbre2))
        cout<<"les deux nbres complexes sont egaux."<<endl;
        else 
        cout<<"les deux nbres complexes ne sont pas egaux."<<endl;
        break;
        case 2:
        cout<<"addition:";
        nbre1.addition(nbre2).afficher();
        break;
        case 3:
        cout<<"soustraction:";
        nbre1.soustraction(nbre2).afficher();
        break;
        case 4:
        cout<<"multiplication:";
        nbre1.multiplication(nbre2).afficher();
        break;
        case 5:
        cout<<"division:";
        nbre1.division(nbre2).afficher();
        break;
        default:
        cout<<"choix invalide."<<endl;

    }
    return 0;
    
}