#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cctype>


using namespace std;

int main(){

//declaration des variables

int i, nbFois, exposant, nbre, resultat, chiffre;
char choix; 
float x, racx; 

cout<<"Bonjour, voici un programme pour calculer des exposants ou des racines carrees."<<endl;
cout<<"\nDans un premier temps, souhaitez-vous calculer des exposant (E) ou des racine (R): "<<endl;
cin>>choix;
choix=toupper(choix);

if(choix == 'R'){

cout<<"Vous voulez calculer combien de racine carrees aujourd'hui? Entrez un nombre: "<<endl;
cin>>nbFois;

for(i=0; i<nbFois; i++){

cout<<"\nEntrer le "<<i+1<<"e nombre dont vous voulez connaitre la racine carree: "<<endl;
cin>>x;
if (x<0.0)
 cout<<"Le nombre que vous venez d'indiquez n'a pas de racine carree"<<endl;
 
 else
 
 { 
   racx= sqrt (x);
   cout<<"La racine carree de votre nombre est: "<<racx<<endl;
 }

}
}

if (choix == 'E'){

cout<<"\nCombien de nombres voulez-vous exposer: "<<endl;
cin>>nbre;

for(i=0; i<nbre; i++){
 
cout<<"Entrez le "<<i+1<<"e nombre a exposer: "<<endl;
cin>>chiffre;
cout<<"\nEntrez maintenant l'exposant: "<<endl;
cin>>exposant;
resultat= pow(chiffre, exposant);
cout<<"\nVoici le resultat: "<<resultat<<endl;
}
}

 else {

    cout<<"Entrer E ou R seulement"<<endl;
 }

cout<<"\nFin du programme, merci d'etre passer me voir ! \n Programme ecrit par Maxime Hebert-Levesque"<<endl;
system("pause");

return 0;
}