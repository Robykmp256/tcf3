#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Pantaloni.h"
#include "Oggetto.h"
#include "carrello.h"
#include "Menusel.h"



Pantaloni::Pantaloni (){
    nome = " Pantaloni";
    fstream file;
    file.open("Pantaloni.txt");
    string pant;
    if ( file.is_open() ) {
        for (int i=0; file; i++){
            getline (file, pant);
            if (i%6==0){
                prodotti.push_back(pant);
                //cout<<maglie<<" "<<i<<endl;    //STAMPA UNA RIGA DI TROPPO, la stampa è di controllo poi va tolta
            }

        }
        file.close();

    }

}

vector <string> Pantaloni::Elenco() const{     //Ti stampa l'elenco delle maglie
    return prodotti;

}

bool Pantaloni::Selezione( int s) const{     //Dato il numero associato alla maglia che hai scelto ti stampa le caratteristiche
    fstream file;
    file.open("Pantaloni.txt");
    string pant;

    if ( file.is_open() ) {
        for (int i=0; file; i++){
            getline (file, pant);
            if(i>=(s)*6 && i<=(s)*6+5){
                cout<<pant<<endl;     		//STAMPA UNA RIGA DI TROPPO, la stampa è di controllo poi va tolta
            }
        }
        file.close();
    }
    cout<<" Aggiungere al carrello? No vvuol dire tornare indietro"<<endl<<"S/N"<<endl;
    string risp;
    cin>>risp;
    if(risp=="n" || risp=="N"){     //con false torna indietro
        return false;
        vet1.push_back(NULL);
    }
    if(risp== "s" || risp=="S"){   //con true crea l'oggetto e lo aggiunge al carrello
        system("cls");
        //Oggetto * og = new Oggetto ("Pantaloni.txt",s);
        vet1.push_back(new Oggetto("Pantaloni.txt",s));
        return true;
    }
    return false;
}

string Pantaloni::Nome () const{
    return nome;
}
Oggetto* Pantaloni::getprod() const
{
    return vet1.back();
}


