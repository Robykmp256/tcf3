#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#include "Oggetto.h"
#include "Menusel.h"

Oggetto::Oggetto( string titolo, int s){
    fstream file;                     //come prendere le righe da un file

    file.open(titolo.c_str(), ios::in);
    string riga;
    int i=0;
    int j=0;
    string risp;
    vector <string> vettore;
    Menusel men;

    if(file.is_open()){
        while(file){
            getline(file,riga);
            if(j>=(s-1)*6 && j<=(s-1)*6+5){   //incrementa la i solo nel momento che mi trovo in corrispondenza del prodotto selezionato
                i++;

            }
            if(i==1){
                nome=riga;
            }
            if(i==3){
                istringstream ss1(riga);  // ss e token sono nomi generici che posso scegliere io
                string token1;

                while(getline(ss1, token1, ' ')){
                    vettore.push_back(token1);   //qua posso caricarlo su un array
                }
                risp= men.sel(vettore," Selezionare un colore ");
                colore=risp;
            }
            vettore.clear();

            if(i==4){
                istringstream ss2(riga);  // ss e token sono nomi generici che posso scegliere io
                string token2;

                while(getline(ss2, token2, ' ')){
                    vettore.push_back(token2);   //qua posso caricarlo su un array
                }
                risp= men.sel(vettore," Selezionare una taglia ");
                colore=risp;
            }

            if(i==5){
                prezzo=riga;
            }

            j++;
        }
        file.close();
    }
}
void Oggetto::stampaog()
{
    cout<<nome<<endl;
    cout<<"Colore: "<<colore<<endl;
    cout<<"Taglia: "<<taglia<<endl;
    cout<<prezzo<<"$"<<endl;
}
string Oggetto::getprezzo()
{
    return prezzo;
}