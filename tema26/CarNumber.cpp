#include "CarNumber.h"

CarNumber::CarNumber()
{

    number = region + to_string(counter / 1000) + to_string(counter / 100 % 10) + to_string(counter / 10 % 10) + to_string(counter % 10) +
        seria1 + seria2;

    counter++;
    if (counter > 9999) {
        counter = 1;
        seria2++;
        if (seria2 > 'Z') {
            seria2 = 'A';
            seria1++;
        }
    }
}

string CarNumber::getNumber() const
{
    return number;
}

void CarNumber::showStatic()
{
    cout << "-----------------" << endl;
    cout << "Region:" << region << endl;
    cout << "Counter: " << counter << endl;
    cout << "Series: " << seria1 << seria2 << endl;
    cout << "-----------------" << endl;
}
