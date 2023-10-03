/* *********************************************************************
 \file fonctions.cpp

    \brief Ce programmme execute plusieurs calculs mathematiques.

    \author   Vincent Ducharme
    \date     16 août 2017
    \version  1.0

    <b>Entrees:</b>
        \li (\c clavier) a  (\c reel)
        \li (\c clavier) b  (\c reel)
        \li (\c clavier) c  (\c reel)
        \li (\c clavier) x  (\c entier)

    <b>Sorties:</b>
        \li (\c ecran) total  (\c reel)
        \li (\c ecran) valeur (\c entier)

    Ce programme contient encore une ou plusieurs erreurs.....
    Trouvez-les et corrigez-les!!
********************************************************************** */

//-- Bibliotheques utilisees  --
#include <iostream>

using namespace std;

/**
    \brief Programme principal effectuant la lecture des valeurs
           et l'affichage des resultats
 **/
int main()
{
    // fonctions utilisees
    int carre(int);
    double additionner(double, double);
    double multiplier(double, double, double);
    
    // donnees locales
    double a, b, c, total;
    int x, valeur;
    double somme;
    
    // lecture des trois valeurs
    cout << "Entrez les trois valeurs a additionner : " ;
    cin >> a >> b >> c;
    // Addition des trois valeurs
    total = additionner(a, b, c);
    // Affichage du resultat
    cout << endl << "La somme de " << a << " + " << b << " + "<< c
       << " est " << total << endl << endl;
    
    total = multiplier(a, b, c);
    // Affichage du resultat
    cout << endl << "Le produit de " << a << " * " << b << " * "<< c
       << " est " << total << endl << endl;
       
    total = moyenne(a, b, c);
    // Affichage du resultat
    cout << endl << "La moyenne de " << a << ", " << b << " et "<< c
       << " est " << total << endl << endl;

    // lecture de la valeur
    cout << "Entrez la valeur a elever au carre: " ;
    cin >> x;
    valeur = carre(x) ;
    cout << "Le carre de x est (dans le main) " << valeur << endl << endl;
    return 0;
}

/* ***********************************************************************
 \brief Cette fonction calcule la moyenne de trois valeurs reelles
 
 \param[in]  val1 - premiere valeur
 \param[in]  val2 - seconde valeur
 \param[in]  val3 - troisieme valeur
 
 \return La moyenne des trois valeurs
 
 ************************************************************************ */
double moyenne(double val1, double val2, double val3)
{
    double additionner(double, double, double);
       
    somme = additionner(val1, val2, val3);
    
    return somme / 3.0;
}

/* ***********************************************************************
 \brief Cette fonction additionne trois valeurs reelles

  \param[in]  val1 - premiere valeur
  \param[in]  val2 - seconde valeur
  \param[in]  val3 - troisieme valeur

  \return La somme des trois valeurs

************************************************************************ */
double additionner(double val1, double val2, double val3)
{
    double total;
    
    total = val1 + val2 + val3;
}

/* ***********************************************************************
 \brief Cette fonction multiplie trois valeurs reelles

  \param[in]  val1 - premiere valeur
  \param[in]  val2 - seconde valeur
  \param[in]  val3 - troisieme valeur

  \return Le produit des trois valeurs

************************************************************************ */
double multiplier(double val1, double val2, double val3)
{
    return total = val1 * val2 * val3;
}

/* ***********************************************************************
 \brief Cette fonction calcule le carre d'une valeur

 \param[in]  val - valeur a elever au carre

  \return La carre de la valeur
************************************************************************ */
void carre(int val)
{
    val = val * val;
    
    cout << endl << "Le carre de x est (dans la fonction) "<< val << endl;
    
    return val;
}

