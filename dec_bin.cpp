#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, rem, sum = 0;
    cin >> n;
    int i = 0;
    while (n != 0)
    {
        rem = n & 1;
        sum = rem * pow(10, i) + sum;
        n = n >> 1;
        i++;
    }
    cout << sum << endl;

    return 0;
}