#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int size, int key)
{
    if (size == 0)
        return false;
    if (arr[0] == key)
        return true;
    else
    {
        return linearSearch(arr + 1, size - 1, key);
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 5};
    int size = 5, key = 41;
    bool ans = linearSearch(arr, size, key);
    ans ? cout << "true" : cout << "false";
    return 0;
}