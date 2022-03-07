#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Maglie.h"
#include "Oggetto.h"
#include "Menusel.h"
#include "carrello.h"


Maglie::Maglie (){
    nome = " Maglie";
    fstream file;
    file.open("Maglie.txt");
    string maglie;
    if ( file.is_open() ) {
        for (int i=0; file; i++){
            getline (file, maglie);
            if (i%6==0){
                prodotti.push_back(maglie);
                //cout<<maglie<<" "<<i<<endl;    //STAMPA UNA RIGA DI TROPPO, la stampa è di controllo poi va tolta
            }

        }
        file.close();
    }
}

vector <string> Maglie::Elenco() const{     //Ti stampa l'elenco delle maglie
    return prodotti;
}

bool Maglie::Selezione( int s) const {     //Dato il numero associato alla maglia che hai scelto ti stampa le caratteristiche
    fstream file;
    file.open("Maglie.txt");
    string maglie;

    if (file.is_open()) {
        for (int i = 0; file; i++) {
            getline(file, maglie);
            if (i >= (s) * 6 && i <= (s) * 6 + 5) {
                cout << maglie << endl;            //STAMPA UNA RIGA DI TROPPO, la stampa è di controllo poi va tolta
            }
        }
        file.close();
    }
    cout << " Aggiungere al carrello? No vuol dire tornare indietro" << endl << "S/N" << endl;
    string risp;
    cin >> risp;
    if (risp == "n" || risp == "N") {     //con false torna indietro
        return false;
        vet2.push_back(NULL);
    }
    if (risp == "s" || risp == "S") {   //con true crea l'oggetto e lo aggiunge al carrello
        system("cls");
        //Oggetto * og = new Oggetto ("Maglie.txt",s);
        //ogg=og;
        vet2.push_back(new Oggetto("Maglie.txt", s)); //se riaolvo questo siamo a posto
        //carrem.aggiungi(vet2.back());
        cout << "Inserire 'c' per continuare gli acquisti o 't' per terminare ";
        cin >> risp;
        while (risp != "c" and risp != "C" and risp != "T" and risp != "t") {
            cout << "carattere non valido;inserire di nuovo" << endl;
        }
        if (risp == "c" || risp == "C") {
            return false;
        }

        if (risp == "t" || risp == "T") {
            return true;
        }
    }
}
    ;
Oggetto* Maglie::getprod() const
{
    return vet2.back();
}
string Maglie::Nome () const{
    return nome;
}



