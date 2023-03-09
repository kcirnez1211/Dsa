#include <bits/stdc++.h>
using namespace std;

int findPower(int base, int power)
{
    if (power == 0)
        return 1;

    if (power == 1)
        return base;

    int ans = findPower(base, power / 2);

    if (power % 2 == 0)
        return ans * ans;
    else
        return base * ans * ans;
}

int main()
{
    int base = 3, power = 3;
    cout << findPower(base, power);
    return 0;
}