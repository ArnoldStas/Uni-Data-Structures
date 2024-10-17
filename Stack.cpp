/******************************************************************************
 * Steko realizacija statiniu masyvu / PER KLASES
******************************************************************************/

#include <iostream>
#include "stekas.h"
using namespace std;

int main()
{
    int p = 10000, r;
    int x;
    cout << "Ivesti steko dydi: ";
    cin >> x;
    Stekas stekas(x);
    while (p != 0) {
        cout << "Pasirinkite ka norite daryti\n";
        cout << "0. Iseiti is programos\n";
        cout << "1. Padeti elementa i steka\n";
        cout << "2. Isimti elementa is steko\n";
        cout << "3. Paziureti virsutini steko elementa\n";
        cout << "4. Patikrinti, ar stekas tuscias\n";
        cout << "5. Patikrinti, ar stekas pilnas\n";
        cout << "6. Parodyti visus steko elementus\n";
        cout << "7. Istrinti visus steko elementus\n";
        cout << "Jusu pasirinkimas: ";
        cin >> p;
        cout << "\n";
        switch (p) {
        case 0:
            exit(EXIT_SUCCESS);
        case 1:
            cout << "Iveskite elemento reiksme: ";
            cin >> r;
            stekas.push(r);
            break;
        case 2:
            if (!stekas.isEmpty()) cout << "Pasalintas elementas " << stekas.pop() << " sekmingai\n";
            else {
                cout << "Pasalintas elementas - \n";
                cout << "TUSCIAS! \n";
            }
            break;
        case 3:
            cout << "Virsutinis steko elementas " << stekas.topEl() << endl;
            break;
        case 4:
            if (stekas.isEmpty() == true) {
                cout << "Stekas tuscias\n";
            }
            else {
                cout << "Stekas turi elementu\n";
            }
            break;
        case 5:
            if (stekas.isFull() == true) {
                cout << "Stekas pilnas\n";
            }
            else {
                cout << "Stekas dar turi laisvos vietos\n";
            }
            break;
        case 6:
            display(stekas);
            break;
        case 7:
            clear(stekas);
            break;
        default:
            cout << "Neteisingas pasirinkimas" << endl;
            break;
        }
    }

    return 0;
}

