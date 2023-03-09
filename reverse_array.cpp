#include <iostream>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
void reverse(int arr[], int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = arr[n - i - 1];
        arr[n - i - 1] = arr[i];
        arr[i] = temp;
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int n, arr[100];
    cin >> n;
    input(arr, n);
    reverse(arr, n);
    display(arr, n);
    return 0;
}