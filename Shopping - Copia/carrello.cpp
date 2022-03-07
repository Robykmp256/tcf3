#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"
#include "Oggetto.h"
#include "carrello.h"
carrello::carrello()
{

}
  void carrello::aggiungi(Oggetto *og)
{
    this->car[i]=og;
i++;
}
void carrello::stampa(){

    for(int j=0;j<car.size();j++)
    {
        string a;
        cout<<"prodotto n "<<j<<":"<<endl;
        car[j]->stampaog();
        cout<<endl;
        a=car[j]->getprezzo();
        int b;
        b=stoi(a);
        prezzi.push_back(b);
    }
}
void carrello::rimuovi(){
    int a;
    cout<<"digita l'elemento che vuoi rimuovere dal carrello?"<<endl;
    cin>>a;
    
    while(a>car.size()+1){
        cout<<"nessun elemento del carrello corrisponde a "<<a<<" , inserire un valore valido"<<endl;
        cin>>a;
    }
    car.erase(car.begin()+(a-1));
}
int carrello::somma(){

    for(int i=0;i<prezzi.size();i++)
    {
        s=s+prezzi[i];
    }
    cout<<"totale= "<<s<<"$"<<endl;
    return s;
}