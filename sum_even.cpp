#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 2, sum = 0;
    while (i <= n)
    {
        /* code */
        sum = sum + i;
        i = i + 2;
    }
    cout << sum;
}