#ifndef METPAGAMENTO_H
#define METPAGAMENTO_H

#include <string>
#include <iostream>
using namespace std;




#include "Account.h"

class Metpagamento {

public:

    virtual void printmail(Account *) const=0;

};

#endif