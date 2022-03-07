#ifndef SHOPPING_CARRELLO_H
#define SHOPPING_CARRELLO_H
#include <string>
#include <vector>
#include "Oggetto.h"
using std::vector;
using namespace std;
class carrello{
public:
    carrello() ;
       void aggiungi(Oggetto*) ;//ci vanno oggetti di tipo Oggetto come input
     void stampa( );
    void rimuovi( );
     int somma();
private:

    vector<int> prezzi;
    vector<Oggetto*> car;
    int i=0;
int s=0;

};


#endif //SHOPPING_CARRELLO_H

