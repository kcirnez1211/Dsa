#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int mask = 0;
    int m = n;

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    if (n == 0)
    {
        /* code */
        cout << 1 << endl;
    }
    else
        cout << ans << endl;

    return 0;
}