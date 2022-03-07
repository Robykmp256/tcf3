#ifndef CATALOGO_H
#define CATALOGO_H

#include <string>
#include <vector>
#include "Oggetto.h"
using namespace std;


class Catalogo{

public:
    virtual vector<string> Elenco() const =0;
    virtual bool Selezione(int) const =0;
    virtual std::string Nome() const =0;
    virtual Oggetto* getprod() const;

};



#endif