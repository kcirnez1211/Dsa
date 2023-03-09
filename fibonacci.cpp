#include <iostream>
using namespace std;

int fibona(int n)
{
    int first = 0, sec = 1;
    for (int i = 2; i < n; i++)
    {
        int term = first + sec;
        first = sec;
        sec = term;
    }
    return sec;
}

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << fibona(n) << endl;
    }
    return 0;
}