#include <bits/stdc++.h>
using namespace std;
int binarySearch(int n)
{
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans;
    while (s <= e)
    {
        int square = mid * mid;
        if (square == n)
            return mid;
        else if (square > n)
            e = mid - 1;
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double exact(int n, int temp)
{
    double factor = 1, z = temp;
    for (int i = 0; i < 3; i++)
    {
        factor = factor / 10;
        for (double j = z; j * j < n; j = j + factor)
            z = j;
    }
    return z;
}
int main()
{
    int n;
    cin >> n;
    int temp = binarySearch(n);
    cout << exact(n, temp);
    return 0;
}