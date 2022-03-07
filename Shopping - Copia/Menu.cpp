#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"
#include "Menu.h"
#include "Menusel.h"

Menu::Menu(){
    ma = new Maglie;
    pa = new Pantaloni;
    lista = new Categorie;
}

void Menu::tutto()const{
    int risp;
    bool scelta;
    Menusel men;

    do{
        risp = men.sel(lista->Elenco()," Selezionare un prodotto tra i seguenti per vedere i dettagli: ");   //mostra gli elementi di quella categoria
        system("cls");
        scelta= lista->Selezione(risp);   //mostra le caratteristiche dell'oggetto scelto e chiede se vuole aggiungerlo al carrello
        system("cls");
    }while(!scelta);
}




void Menu::parte()const{
    vector <Catalogo *> vet {pa,ma}; //creo un vettore con le varie categorie
    vector <string> vettore;
    bool scelta;
    int risp1;
    int risp2;
    Menusel men;

    for (int i= 0; i <vet.size(); i++){
        vettore.push_back( vet[i]->Nome());
    }

    do{
        risp1 = men.sel(vettore,"Le categorie sono le seguenti, selezionarne una: ");
        system ("cls");

        risp2= men.sel(vet[risp1]->Elenco()," Selezionare un prodotto tra i seguenti prodotti per vedere i dettagli: ");   //mostra gli elementi di quella categoria
        system ("cls");
        scelta= vet[risp1]->Selezione(risp2);   //mostra le caratteristiche dell'oggetto scelto e chiede se vuole aggiungerlo al carrello
        system("cls");
        vet3.push_back(vet[risp2]->getprod());//capire sto caz di no matching
    }while(!scelta);

}
void Menu::gestione()
{
for(int j=0;j<vet3.size();j++)
{
    if(vet3[j]==NULL)
    {
        vet3.erase(vet3.begin()+j);
    }
}
    for(int j=0;j<vet3.size();j++){
        carr.aggiungi(vet3[j]);
    }
    char y;
    cout<<"carrello:"<<endl;
    carr.stampa();
    cout<<"1-conferma"<<endl;
    cout<<"2-elimina un elemento dal carrello"<<endl;
    cin>>y;
    while(y!=1 and y!=2)
    {
        cout<<"risposta non valida inserire di nuovo"<<endl;
        cin>>y;
    }
    while(y==2)
    {
        carr.rimuovi();
        cout<<"1-conferma ordine"<<endl;
        cout<<"2-elimina un altro elemento"<<endl;
        cin>>y;
    }
    carr.stampa();
    som=carr.somma();
}
int Menu::getsomma()
{
    return som;
}