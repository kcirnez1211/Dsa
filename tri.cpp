#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, flag = 0, mid;
        cin >> x;
        a = 1, b = x / 2;
        mid = a + (b - a) / 2;
        while (a <= b)
        {
            b = mid;
            if (2 * a + 2 * b + a * b == x)
            {
                flag = 1;
                break;
            }
            else if (2 * a + 2 * b + a * b > x)
                b = mid - 1;
            else
                a = a + 1;
            mid = a + (b - a) / 2;
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}