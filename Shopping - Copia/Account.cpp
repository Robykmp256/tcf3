#include<iostream>
#include<fstream>
#include <string>
#include <sstream>
using namespace std;


#include "Account.h"
#include "Registrazione.h"

Account::Account(int *UNO, int *GLOBAL, string *AZIONE1, string *AZIONE2) {

    if (*AZIONE1 == "A" or *AZIONE2 == "A") {

        int i = 0;
        fstream file;
        file.open("Utenti.txt", ios::in);
        string riga;
        string ausilio;

        if (file.is_open()) {
            while (file) {
                do {
                    getline(file, riga);
                    ausilio = riga;
                    i = i + 1;

                } while (i < *UNO);
                if (i == *UNO) {
                    Mail = ausilio;
                    getline(file, riga);
                    getline(file, riga);
                    Name = riga;
                    getline(file, riga);
                    Surname = riga;




                }
                getline(file, riga);
            }
        }
        file.close();}
    if (*AZIONE1 == "R" or *AZIONE2 == "R") {

        int v = 0;
        fstream file;
        file.open("Utenti.txt", ios::in);
        string riga;
        string ausilio;

        if (file.is_open()) {
            while (file) {
                do {
                    getline(file, riga);
                    ausilio = riga;
                    v = v + 1;

                } while (v < *UNO);
                if (v == *UNO) {
                    Mail = ausilio;
                    getline(file, riga);
                    getline(file, riga);
                    Name = riga;
                    getline(file, riga);
                    Surname = riga;



                }
                getline(file, riga);
            }
        }
        file.close();
    }



}


Account::~Account() {
    //global = 0;
}


string Account::getName() const {
    return Name;
}
string Account::getSurname() const {
    return Surname;
}
string Account::getEmail() const {
    return Mail;
}
