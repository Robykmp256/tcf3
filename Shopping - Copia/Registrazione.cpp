#include <iostream>
#include <string>
#include<fstream>

#include <conio.h>
using namespace std;

#include "Registrazione.h"


Registrazione::Registrazione(int *UNO,int *GLOBAL) {
    int i = 1;

    cout << "Inserisci nome  " << endl;
    cin >> name;
    cout << "Inserisci cognome " << endl;
    cin >> surname;


    cout << "Inserisci la mail e la password " << endl;
    cin >> mail;
    int j =0;
    do {
        password[j] = getch();
        if (password[j]!=13){
            cout<<"*";
            j++;}

    }while(password[j] != 13);
    password[j] = '\0';
    printf("\n");

    ofstream fout( "Utenti.txt", ios::app);

    fout << mail << endl;
    for (int a = 0; a<j; a++) {
        fout << password[a];
    }
    fout<<endl;
    fout << name << endl;
    fout << surname << endl;

    cout << endl;
    fout.close();

    *GLOBAL = 1;
    cout << "login effettuato! " << endl;
    system("cls");



    string cmail;
    string cpassword;

    fstream file;
    file.open("Utenti.txt", ios::in);
    string riga;

    if (file.is_open()) {
        while (file) {
            getline(file, riga);
            cmail = riga;

            if (mail == cmail) {
                getline(file, riga);
                cpassword = riga;
                if (cpassword == password) {
                    *UNO = i;
                }

            }

            i = i + 1;
        }
    }
    file.close();



}






string Registrazione::getName() const {
    return name;
}
string Registrazione::getSurname() const {
    return surname;
}
string Registrazione::getEmail() const {
    return mail;
}

