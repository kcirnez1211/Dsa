#include <bits/stdc++.h>
using namespace std;

void reverse(string &str, int i, int j)
{
    if (j < i)
        return;
    swap(str[i], str[j]);
    i++, j--;
    reverse(str, i, j);
}

int main()
{
    string str = "abcde";
    int i = 0, j = str.length() - 1;
    reverse(str, i, j);
    cout << str;
    return 0;
}