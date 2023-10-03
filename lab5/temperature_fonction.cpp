/* * *********************************************************************
 \file temperature_fonction.cpp

  \brief Programme qui, etant donne, une temperature en degre Fahrenheit
         affiche son equivalent en degre Celsius.

    \author   Gerard Houdeville
    \date     1 septembre 1994
    \version  1

    <b>Entrees:</b>
        \li (\c clavier) fahren : la temperature en fahrenheit  (\c reel)

    <b>Sorties:</b>
        \li (\c ecran) celcius : la temperature en celcius  (\c reel)

********************************************************************** **/

#include <iostream>

using namespace std;


int main()
{
  // fonctions utilisees
  float convertitFahrEnCelcius(float) ;

  // donnees locales
  float fDegFahren ;           //temperature en degre fahrenheit
  float fDegCelsius ;           //temperature en degre celsius

  // lecture de la temperature, conversion puis impression
  cout << "Entrez une temperature en degre Fahrenheit: " ;
  cin >> fDegFahren ;
  fDegCelsius = convertitFahrEnCelcius(fDegFahren) ;
  cout << "\nLa temperature de " << fDegFahren << " degres Fahrenheit "
       << " correspond a " << fDegCelsius << " degres Celsius"
       << endl << endl;

  return 0;
}

/* * *********************************************************************
 
    \brief Fonction permettant de convertir une temperature de degre Fahrenheit en degre Celsius
    \param[in] degre Fahrenheit
    \return degre Celsius
 
 ********************************************************************** **/

float convertitFahrEnCelcius(float i_fDeg)
{
  return( (5.0/9) * (i_fDeg - 32) ) ;
}
