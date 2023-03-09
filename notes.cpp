#include <iostream>
using namespace std;

int main()
{
    int n, hun, fif, twen, one;
    cout << "Enter the total amount: " << endl;
    cin >> n;

    switch (1)
    {
    case 1:
        hun = n / 100;
        cout << hun << "\thundreds" << endl;
        n = n % 100;

    case 2:
        fif = n / 50;
        cout << fif << "\tfifties" << endl;
        n = n % 50;

    case 3:
        twen = n / 20;
        cout << twen << "\ttwenties" << endl;
        n = n % 20;

    case 4:
        one = n / 1;
        cout << one << "\tones" << endl;
        n = n % 1;
    }

    return 0;
}