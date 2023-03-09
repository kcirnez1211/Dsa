#include <iostream>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + arr[i];

    return sum;
}
int main()
{
    int n, arr[100];
    cin >> n;

    input(arr, n);
    cout << sum(arr, n);
    return 0;
}