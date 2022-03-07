#include <iostream>
#include <string>
using namespace std;


#include "Paypal.h"
#include "Account.h"

Paypal::Paypal() {
    cout << "Inserire email e password di Paypal, premendo invio" << endl;
    cin >> emailpp;
    cin >> passwordpp;
}

void Paypal::printmail(Account *account) const {
    cout << "Gentile " << account->getName() << " " << account->getSurname() << "," << endl;
    cout << endl;
    cout << "Tramite questa mail vogliamo confermarle l'ordine dei seguenti articoli:" << endl;   //prova a mandarla davvero, sfrutta getmail!!!
    // for (i = 0; i < v1.size(); i++) {
    //	cout << v1[i].getname << " " << v1[i].getcolore << " di taglia " << v1[i].gettaglia << endl;}


    cout << "Per un totale di..." << "che sara' addebitato sul conto Paypal relativo all'username " << emailpp << "." << endl;
    cout << "Gli articoli saranno spediti all'indirizzo di consegna: "  << endl;


}
