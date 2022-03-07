#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

using std::cout;
using std::endl;

#ifndef ACCESSO_H
#define ACCESSO_H

class Accesso {

public:
    Accesso(int *,int *);

    int getx() const;
    string getName() const;
    string getSurname() const;
    string getEmail() const;
    string getIspedizione() const;

private:
    string name;
    string surname;
    string mail;
    string password;
    string ispedizione;

};

#endif