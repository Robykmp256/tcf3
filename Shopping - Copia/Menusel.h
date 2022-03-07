#ifndef MENUSEL_H
#define MENUSEL_H

#include <vector>
#include <string>
using namespace std;

class Menusel {
    public:
        Menusel();
        int sel(vector <string>,string)const;
    private:
        int k=0;
};


#endif
