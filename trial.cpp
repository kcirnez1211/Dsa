#include <iostream>
using namespace std;

void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
int pivotIndex(int nums[], int n)
{
    int sum = 0, tot = 0;
    for (int k = 0; k < n; k++)
    {
        tot += nums[k];
    }
    cout << tot << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            sum += nums[j];
        }
        cout << sum << endl;
        if (sum == tot - sum - nums[i])
            return i;
    }
    return -1;
}

int main()
{
    int n, arr[100];
    cin >> n;
    input(arr, n);
    cout << pivotIndex(arr, n);
}