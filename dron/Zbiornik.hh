#ifndef SCENA_HH
#define SCENA_HH
/*!
 * \file
 * \brief Definicja klasy Zbiornik
 *
 * Plik zawiera definicjê klasy zbiornik
 */
#include <iostream>
#include "dron.hh"
/*!
 * \brief Modeluje zbiornik zawierajacy elementy tam sie znajdujace
 *
 * Posiada metody odpowiadajace za dzialanie programu do obslugi drona
 *
 */
class Zbiornik{
    /*!
 * \brief D
 *
 * Jest to dron ktory znajduje sie w zbiorniku
 */
    Dron D;
public:
/*!
 * Metoda wyswietlajaca menu
 */
    void WyswietlMenu();
/*!
 * Metoda obslugujaca menu
 */
    void Menu(std::shared_ptr<drawNS::Draw3DAPI> kpi);
    /*!
 * Metoda obslugujaca scene graficzna i interfejs uzytkownika
 */
    void Scena();
};
#endif // SCENA_HH
