#include<iostream>
#include<cmath>
using namespace std;
class Vecteur3d {
private:
float x,y,z;
public:
Vecteur3d(float x=0,float y=0,float z=0):x(x),y(y),z(z){}
void afficher()const{
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
Vecteur3d somme(const Vecteur3d &v)const{
    return Vecteur3d(x + v.x, y + v.y, z + v.z);
}
float produitscalaire(const Vecteur3d &v)const{
    return x*v.x+y*v.y+z*v.z;
}
bool coincide(const Vecteur3d &v)const{
    return (x==v.x && y==v.y && z==v.z);
}
float norme ()const{
    return sqrt(x*x+y*y+z*z);
}
Vecteur3d normaxParValeur(const Vecteur3d &v)const{
    return( this->norme()>v.norme())?*this:v;
}
Vecteur3d* normaxParAdresse(const Vecteur3d *v)const{
    return(this->norme()> v->norme())? const_cast<Vecteur3d*>(this):const_cast<Vecteur3d*>(v);
}
const Vecteur3d& normaxParReference(const Vecteur3d &v)const{
    return(this->norme()>v.norme())?*this:v;
}
};
int main(){
    Vecteur3d v1(5.0,3.0,7.0);
    Vecteur3d v2(1.0,9.0,6.0);
    
    cout<<"vecteur 1:";
    v1.afficher();
    cout<<"vecteur 2:";
    v2.afficher();
    
    Vecteur3d v3=v1.somme(v2);
    cout<<"la somme de v1 et v2 est :";
    v3.afficher();
    
    cout<<"le produit scalaire de v1 et v2 est :"<<v1.produitscalaire(v2)<<endl;
    
    cout<<"la norme de v1 est :"<<v1.norme()<<endl;
    cout<<"la norme de v2 est :"<<v2.norme()<<endl;

    Vecteur3d maxNormeParValeur = v1.normaxParValeur(v2);
    cout << "Vecteur avec la plus grande norme (par valeur) : ";
    maxNormeParValeur.afficher();

    Vecteur3d* maxNormeParAdresse = v1.normaxParAdresse(&v2);
    cout << "Vecteur avec la plus grande norme (par adresse) : ";
    maxNormeParAdresse->afficher();
     
    const Vecteur3d& maxNormeParReference = v1.normaxParReference(v2);
    cout << "Vecteur avec la plus grande norme (par référence) : ";
    maxNormeParReference.afficher();
    return 0;
}