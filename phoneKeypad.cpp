#include <bits/stdc++.h>
using namespace std;

void solve(string digits, string output, int index, vector<string> &ans, string mapping[])
{
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mapping);
        output.pop_back();
    }
}

void phoneKeypad(string digits, vector<string> &ans)
{
    string output;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, 0, ans, mapping);
}

int main()
{
    string digits;
    cin >> digits;
    vector<string> ans;
    if (digits.length() == 0)
        cout << "";
    phoneKeypad(digits, ans);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}