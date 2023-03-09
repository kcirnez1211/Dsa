#include <iostream>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
int binarySearch(int arr[], int n, int k)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2; // chalaki ka kaam taaki jab start end very large integers ho to koi bhi int ke range se bahar naa chala jaye(eg: start=end=2^31-1)
    while (start <= end)
    {
        /* code */
        if (arr[mid] == k)
            return mid;

        if (arr[mid] < k)
            start = mid + 1;

        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int n, arr[100], key;
    cin >> n >> key;
    input(arr, n);
    cout << binarySearch(arr, n, key);
    return 0;
}