#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str, int i, int j)
{
    if (i > j) // BASE CASE
        return true;

    if (str[i] != str[j])
        return false;
    else
        return isPalindrome(str, i + 1, j - 1);
}

int main()
{
    string str = "malayalam";

    int n = str.length();
    bool ans = isPalindrome(str, 0, n - 1);

    if (ans)
        cout << true;
    else
        cout << false;
    return 0;
}