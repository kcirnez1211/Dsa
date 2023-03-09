#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int n, int k)
{
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    if (n == 0)
        return -1;
    if (arr[mid] == k)
        return 1;
    else
    {
        if (arr[mid] < k)
        {
            s = mid + 1;
            return binarySearch(arr + s, e - s + 1, k);
        }
        if (arr[mid] > k)
        {
            e = mid - 1;
            return binarySearch(arr, e - s + 1, k);
        }
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6, key = 8;
    int ans = binarySearch(arr, size, key);
    cout << ans;
    return 0;
}