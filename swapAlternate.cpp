#include <iostream>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
void alter(int arr[], int n)
{
    int start = 0;
    int end = 1;
    for (int i = 0; start < n - 1; i++)
    {
        swap(arr[start], arr[end]);
        start += 2;
        end += 2;
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
    alter(arr, n);
    display(arr, n);
    return 0;
}