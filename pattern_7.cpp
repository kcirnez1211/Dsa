#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    int space = i - 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << "* ";
            j++;
        }
        while (space)
        {
            cout << " ";
            space--;
        }
        cout << endl;
        i++;
    }

    return 0;
}