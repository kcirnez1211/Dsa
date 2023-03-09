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
        int space = n - i;
        while (space)
        {
            /* code */
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            /* code */
            cout << j;
            j++;
        }
        int z = i;
        while (z > 1)
        {

            z--;
            cout << z;
        }

        cout << endl;
        i++;
    }

    return 0;
}