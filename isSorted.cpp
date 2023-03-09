#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    else
    {
        return isSorted(arr + 1, size - 1);
    }
}

int main()
{
    int arr[5] = {2, 4, 12, 8, 10};
    int size = 5;

    bool ans = isSorted(arr, size);
    if (ans)
        cout << "Array is Sorted";
    else
        cout << "Array is not sorted";

    return 0;
}