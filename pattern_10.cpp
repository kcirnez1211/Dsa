#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        /* code */
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        int space = i - 1;
        while (space)
        {
            /* code */
            cout << "*";
            space--;
        }
        space = i - 1;
        while (space)
        {
            /* code */
            cout << "*";
            space--;
        }
        int z = j - 1;
        while (z)
        {
            /* code */
            cout << z;
            z--;
        }
        cout << endl;
        i++;
    }

    return 0;
}