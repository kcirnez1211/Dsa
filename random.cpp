#include <iostream>
using namespace std;

int main()
{
    int rem, n, i = 1, count = 0; // 32 bits
    cin >> n;

    while (i <= 32)
    {
        rem = n % 10;
        n = n / 10;
        if (rem == 1)
            count++;
    }
    return count;
}