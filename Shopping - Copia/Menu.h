#ifndef MENU_H
#define MENU_H

#include <string>
#include "Catalogo.h"
#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"
using namespace std;


class Menu{

public:
    Menu();
    void tutto() const;
    void parte() const;
    void gestione();
    int getsomma();
private:
    Catalogo *ma;
    Catalogo *pa;
    Catalogo *lista;
    vector <Oggetto*> vet3;
carrello carr;
int som;
};



#endif