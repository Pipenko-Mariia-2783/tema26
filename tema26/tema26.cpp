#include "CarNumber.h"
int CarNumber::counter = 9999;
char CarNumber::seria1 = 'A';
char CarNumber::seria2 = 'Z';
string CarNumber::region = "AX";

int main()
{
    CarNumber::showStatic();
    CarNumber a1;
    CarNumber a2;
    CarNumber a3;

    cout << a1.getNumber()<<endl;
    cout << a2.getNumber()<<endl;
    cout << a3.getNumber()<<endl;
    a1.showStatic();
    a3.showStatic();
}