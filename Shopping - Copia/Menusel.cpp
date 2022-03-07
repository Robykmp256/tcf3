#include <iostream>
#include <conio.h>   //prende input da tastiera
#include <string>
#include <vector>
#include <windows.h>

#include "Menusel.h"


using namespace std;

Menusel::Menusel() {
    k=1;
}



int Menusel::sel(vector<string> vettore, string titolo) const {
    int input;
    int j = 0;

    while(true){
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        cout<<titolo<<endl;
        for (int i=0; i<vettore.size(); i++){
            if (i==j){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                cout<<vettore [i]<<endl;
            }else{
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                cout<< vettore[i]<<endl;
            }
        }

        input = getch();
        if (input == 72){
            if ( j != 0){  //freccia up, salgo nell'elenco
                j--;
            }
        }
        if (input == 80){    //freccia down, scendo nell'elenco
            if ( j!=vettore.size()-1){
                j++;
            }
        }
        if (input == 13){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout<<j;
            return j;

        }
        system ("cls");
    }


}

