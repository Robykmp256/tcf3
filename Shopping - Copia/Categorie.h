#ifndef CATEGORIE_H
#define CATEGORIE_H


#include <string>
#include <vector>
using namespace std;

#include "Catalogo.h"

class Categorie : public Catalogo{
public:
    Categorie();
    virtual vector <string> Elenco() const;
    virtual bool Selezione(int) const;
    virtual string Nome () const;
private:
    vector <Catalogo *> cat;  //elenco delle categorie
    vector <string> prodotti ; //elenco dei prodotti, concateno quelli delle due categorie

};
#endif