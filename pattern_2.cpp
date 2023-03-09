#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1, z = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << z << "  ";
            z++;
            j++;
        }
        cout << endl;
        i++;
    }
}