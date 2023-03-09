#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int size)
{
    if (size == 0 || size == 1)
        return;

    if (arr[0] > arr[1])
        swap(arr[0], arr[1]);

    bubbleSort(arr + 1, size - 1);
    bubbleSort(arr, size - 1);
}

int main()
{
    int arr[6] = {7, 2, 3, 0, 90, 6};
    int size = 6;
    bubbleSort(arr, size);
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    return 0;
}