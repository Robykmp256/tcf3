#ifndef REGISTRAZIONE_H
#define REGISTRAZIONE_H



#include <string>
#include <iostream>
using namespace std;


class Registrazione {

public:
    Registrazione(int *,int *);

    string getName() const;
    string getSurname() const;
    string getEmail() const;


private:
    string name;
    string surname;
    string mail;
    char password[20];


};

#endif