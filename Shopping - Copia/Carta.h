#ifndef CARTA_H
#define CARTA_H

#include "Metpagamento.h"
#include "Account.h"
#include <string>

class Carta : public Metpagamento {

public:
    Carta();

    virtual void printmail(Account *) const;

private:
    string numerocarta;
    string datascadenza;
    string codice;

};


#endif