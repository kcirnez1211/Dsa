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
        while (j <= i)
        {
            /* code */
            char ch = 'D' - (i - j);
            cout << ch << "  ";
            j++;
        }
        cout << endl;
        i++;
    }
}