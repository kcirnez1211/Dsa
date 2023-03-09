#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    int z;
    while (i <= n)
    {
        /* code */
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        z = i;
        while (j <= n - i + 1)
        {
            cout << z;
            z++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}