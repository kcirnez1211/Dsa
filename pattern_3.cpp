#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1, z;
    while (i <= n)
    {
        /* code */
        int j = 1;
        z = i;
        while (j <= i)
        {
            /* code */

            cout << z << "  ";
            z++;
            j++;
        }
        cout << endl;
        i++;
    }
}