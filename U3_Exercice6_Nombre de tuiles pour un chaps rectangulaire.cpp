/*
 Programmer: Fabrice
 Date:  20/09/2024
 But: Demander les dimensions d'un champs rectangulaire en pieds et afficher sa surface en m2 puis le nombre
      de tuiles de 28cm(28/100 m)cotes necessaires pour couvrir le planche
*/

#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

//Liste des constantes
const double PIED_EN_M = 0.3048;
const double TAILLE_TUILE = (double)28 / 100; //valeur de 0.28m par cote

int main()
{
    //liste des inputs dimensions du champs
    double largeur = 0.0;
    double longueur = 0.0;

    //Liste des variables intermedieres 
    unsigned short nbreTuileLongeur = 0;
    unsigned short nbreTuileLargeur = 0;
 

    //Liste des output
    unsigned short nbreTuile = 0;
    double surface = 0.0;

    //Entrer des valeurs
    cout << "\t\tCalcul du nombre de tuiles completes"
         <<endl<<"\t\tpour le couvrir une piece rectangulaire" << endl << endl
         << "Entrer les dimensions du plancher en pieds:" << endl
         << "\tValeur en pieds de la longueur (ex:12.5) de la piece: ";
    cin >> longueur;
    cout << "\tValeurs en pieds de la largeur (ex:12.5) de la piece: ";
    cin >> largeur;
    

    /*
    Traitements
    */

    surface= (longueur*PIED_EN_M)*(largeur*PIED_EN_M);
    nbreTuileLongeur =ceil(longueur * PIED_EN_M /TAILLE_TUILE);  //valeur entiere superieure car pas de demi tuile dans la vente
    nbreTuileLargeur = ceil(largeur * PIED_EN_M / TAILLE_TUILE);
    nbreTuile = nbreTuileLargeur *nbreTuileLongeur;

    //Affichage
    cout << endl << " La surface de la piece est de:\t\t "
        <<fixed<<setprecision(2)
        << surface << " m2.";
    cout << endl << " Tuiles de 28 cm de cote seront requises:\t "
        << nbreTuile << "." << endl;

    system("pause");
    return 0;

}


