#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> arr, int s, int mid, int e)
{
}

mergesort(vector<int> arr, int s, int e)
{

    int mid = s + e / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}

int main()
{
    vector<int> arr{10, 7, 5, 3, 1};
    mergesort(arr, vector[0], arr.size() - 1);
    return 0;
}