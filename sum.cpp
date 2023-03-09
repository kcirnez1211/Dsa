#include <bits/stdc++.h>
using namespace std;

int sum(int *arr, int size)
{
    if (size == 0)
        return 0;
    if (size == 1) // base case
        return arr[0];

    return sum(arr + 1, size - 1) + arr[0];
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 5};
    int size = 5;
    int ans = sum(arr, size);
    cout << ans;
    return 0;
}