#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    /*char ch = 'A';
    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {
            cout << ch << "  ";
            j++;
        }
        cout << endl;
        i++;
        ch++;
    }*/
    while (i <= n)
    {
        /* code */
        int j = 1;
        char ch = 'A';
        while (j <= n)
        {
            cout << ch << "  ";
            ch++, j++;
        }
        cout << endl;
        i++;
    }
}