#include <bits/stdc++.h>
using namespace std;
void mergeSort(int arr, int mid, int start, int end)
{
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int start, mid, end;
    start = 0, end = n;
    mid = start + (end - start) / 2;
    mergeSort(arr, mid, start, end);

    return 0;
}