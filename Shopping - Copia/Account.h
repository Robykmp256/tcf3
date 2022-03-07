#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <iostream>
using namespace std;

#include "Registrazione.h"
#include"Accesso.h"




class Account {

public:
    Account(int *,int *,string *,string *);
    ~Account();

    string getName() const;
    string getSurname() const;
    string getEmail() const;


private:
    string Name;
    string Surname;
    string Mail;


};

#endif