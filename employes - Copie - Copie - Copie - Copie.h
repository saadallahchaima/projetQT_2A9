#ifndef EMPLOYES_H
#define EMPLOYES_H
#include <QString>
#include <QSpinBox>
#include <QComboBox>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include<QDate>

using namespace std;

class employes
{
   int cin,nombre_enfants,cnss,salaire;
   QString nomprenom,email,adresse,profession,assurance,nationnalite;
   QDate date_entree,naissance;



public:

//constructeur
    employes(){}
    employes(int,QString,QString,QString,QString,QString,QDate,QDate,int,int,QString,int);
    //Getters

int getcin(){return cin;}
QString getnomprenom(){return nomprenom;}
QString getemail(){return  email;}
QString getadresse(){return  adresse;}
QString getprofession(){return  profession;}
QString getassurance(){return  assurance;}
QDate getdate_entree(){return  date_entree;}
QDate getnaissance(){return naissance;}
int getnombreenfants(){return  nombre_enfants;}
int getcnss(){return  cnss;}
QString getnationnlaite(){return  nationnalite;}
int getsalaire(){return  salaire;}
 /*



           */

//setters
void setcin(int cin){this->cin=cin;}
void setnomprenom(QString nv_nomprenom){nv_nomprenom=nomprenom;}
void setemail(QString nv_email){nv_email=email;}
void setadresse(QString nv_adresse){nv_adresse=adresse;}
void setprofession(QString nv_profession){nv_profession=profession;}
void setassurance(QString nv_assurance){nv_assurance=assurance;}
void setdate_entree(QDate nv_date_entree){nv_date_entree=date_entree;}
void setnaissance(QDate nv_naissance){nv_naissance=naissance;}
void setnombre_enfants(int nombre_enfants){this->nombre_enfants=nombre_enfants;}
void setcnss(int cnss){this->cnss=cnss;}
void setnationnalite(QString nv_nationnalite){nv_nationnalite=nationnalite;}
void setsalaire(int salaire){this->salaire=salaire;}

 /*


 */

bool ajouter_employe();
bool supprimer_employe(int);
QSqlQueryModel * afficher_Listeemploye();
bool modifier_employe(int ,QString ,QString ,QString ,QString ,QString ,QDate,QDate ,int,int,QString,int );
bool controle_saisi_emp(employes);
};

#endif // EMPLOYES_H
