#include <iostream>
#include <string>
#include <vector>

#include "Menu.h"
#include "Registrazione.h"
#include "Accesso.h"
#include "Carta.h"
#include "Paypal.h"
#include "Account.h"
#include "Menusel.h"

using namespace std;

int main() {
    int risposta;  //variabile usata per salvare le risposte dell'utente
    int global = 0;
    int aiuto = 0;
    string azione1=" ";
    string azione2=" ";
    int uno;
    int due;

    Menusel men;

    cout << "Benvenuto nel negozio online!" << endl;
    cout << endl;
    cout << "Digita 'A' per accedere" << endl;
    cout << "Nuovo cliente? Digita 'R' per registrarti" << endl;
    cout << "Digita 'C' per sfogliare il catalogo " << endl;
    cin >> azione1;
    system("cls");

    while (azione1 != "A" and azione1 != "R" and azione1 != "C"){
        cout << "Carattere non valido! Digita nuovamente" << endl;
        cin >> azione1;
        system("cls");
    }

    if (azione1 == "A") {
        Accesso accesso(&uno, &global);
    }
    if (azione1 == "R") {
        Registrazione registrazione(&uno, &global);
    }
    int x=1;

        vector<string> vettore{"Intero catalogo", "Per categoria"};
        risposta = men.sel(vettore, " Vuole vedere l'intero catalogo o sfogliarlo per categoria?");
        system("cls");

        Menu m;

        if (risposta == 0) {
            m.tutto();
        } else {
            m.parte();
        }
    system("cls");
        m.gestione();

    if (global == 1) {
        aiuto = 1;
        cout << "Per procedere con il pagamento, ti invitiamo ad accedere o registrarti!" << endl;
        cout << "Digita 'A' per accedere" << endl;
        cout << "Nuovo cliente? Digita 'R' per registrarti" << endl;
        cin >> azione2;

        int b=0;
        do {
            if(b>0){
                cout << "Carattere non valido! Digita nuovamente" << endl;
                cin >> azione2;}
            b++;
        } while (azione2 != "A" and azione2 != "R");
        if (azione2 == "A")
            Accesso accesso(&uno,&global);
        if (azione2 == "R")
            Registrazione registrazione(&uno,&global);
    }

    Account account(&uno,&global,&azione1,&azione2);

    string d;
    cout << "E' possibile effettuare il pagamento tramite carta, carta prepagata o Paypal" << endl;
    cout << "Digita 'C' per procedere con la carta" << endl;
    cout << "Digita 'P' per procedere con PayPal" << endl;
    cin >> d;

    int c=0;
    do {
        if(c>0){
            cout << "Carattere non valido! Digita nuovamente" << endl;
            cin >> d;}
        c++;
    } while (d != "C" and d != "P");
    if (d == "C") { Carta carta;
        carta.printmail(&account);
    }
    if (d == "P"){
        Paypal paypal;
        paypal.printmail(&account);
    }

    void logout(); {
        cout << "Vuoi fare il logout? Digita Si o No" << endl;
        string risposta;
        cin >> risposta;
        if (risposta == "Si") {
            account.~Account();
            global = 0;
        }
    }
    return 0;
}