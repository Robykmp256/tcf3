#ifndef PANTALONI_H
#define PANTALONI_H


#include <string>
#include <vector>
using namespace std;

#include "Catalogo.h"
#include "Oggetto.h"
#include "carrello.h"

class Pantaloni: public Catalogo{

public:
    Pantaloni();
    virtual vector<string> Elenco() const;
    virtual bool Selezione(int) const;
    virtual string Nome () const;
    virtual Oggetto* getprod() const;
private:
    vector <string> prodotti;  //prendere magari in input il numero di prodotti?
    string nome ;
    vector<Oggetto* > vet1;
    carrello carrep;
};

#endif
