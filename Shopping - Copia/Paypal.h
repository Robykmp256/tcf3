#ifndef PAYPAL_H
#define PAYPAL_H

#include "Metpagamento.h"
#include <string>
#include "Account.h"

class Paypal : public Metpagamento {

public:
    Paypal();

    virtual void printmail(Account *) const;

private:
    string emailpp;
    string passwordpp;
    string Name;
    string Surname;
    string Mail;
    string Ispedizione;

};


#endif
