#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
//definir les variables
float mensualite, capital, tauxMensuel, tauxAnnuel, calcul1, calcul2, calcul3;
int nbAN, nbMois;

cout<<"Entrer le capital : "<<endl;
cin>>capital;
cout<<"Enter le nombre d'annee : "<<endl;
cin>>nbAN;
cout<<"Entrer le taux annuel : "<<endl;
cin>>tauxAnnuel;
//calculs

nbMois = nbAN*12;
tauxMensuel = (tauxAnnuel/100)/12;
calcul1 = capital*tauxMensuel;
calcul2 = pow((1+tauxMensuel), nbMois);
calcul3 = calcul2-1;
mensualite = calcul1*(calcul2/calcul3);

cout<<"Mensualite : "<<mensualite<<endl;


system("pause");

    return 0;
}