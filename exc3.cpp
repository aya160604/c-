#include<iostream>
#include<string>
using namespace std;
class Personne{
    private:
    string nom;
    string prenom;
    string date;
    public: 
    Personne(string n,string p,string d):nom(n),prenom(p),date(d){}
    virtual void afficher()const{
        cout<<"nom:"<<nom<<",prenom:"<<prenom<<",date:"<<date<<endl;
    }
};
class Employe: public Personne {
  private:
  double salaire;
  public:
  Employe(string n,string p,string d,double s):Personne(n,p,d),salaire(s){}
  double getsalaire()const{return salaire;}
  void setsalaire(double s){ salaire=s;}
  void afficher()const override{
    Personne::afficher();
    cout<<"salaire:"<<salaire<<endl;
  }

};
class Chef: public Employe {
    private:
    string service;
    public:
    Chef(string n,string p,string d,double s,string serv ):Employe(n,p,d,s),service(serv){}
    string getservice()const{return service;}
    void setservice(string serv){service=serv;}
    void afficher() const override{
     Employe:: afficher();
     cout<<"service:"<<service<<endl;
    }
};
class Directeur : public Chef {
    private:
    string societe;
    public:
    Directeur(string n,string p,string d,double s,string serv,string soc):Chef(n,p,d,s,serv),societe(soc){}
    string getsociete(){return societe;}
    void setsociete(string soc){societe=soc;}
    void afficher()const override{ 
        Chef:afficher();
        cout<<"societe:"<<societe<<endl;
    }
};
int main(){
    Personne personne("Benkiran" ,"Mohamed","15/06/1986");
    Employe employe("Quarawi","Douae","03/09/1996",3000);
    Chef chef("Bouabid","Youssef","11/04/1983",8000,"management");
    Directeur directeur("Berrada","Ilham","17/08/1990",12000,"Ressources Humaines","Renault");
    
    cout<<"Personne :"<<endl;
    personne.afficher();
    cout<<"\nEmploye :"<<endl;
    employe.afficher();
    cout<<"\nChef :"<<endl;
    chef.afficher();
    cout<<"\nDirecteur :"<<endl;
    directeur.afficher();

    return 0;
}
