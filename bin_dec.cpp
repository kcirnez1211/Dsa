#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, i = 0;
    cin >> n;

    int sum = 0;

    while (n != 0)
    {
        /* code */
        int rem = n % 10;
        if (rem == 1)
        {
            /* code */
            sum = pow(2, i) + sum;
        }
        i++;
        n = n / 10;
    }
    cout << sum << endl;

    return 0;
}