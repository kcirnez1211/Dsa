#include <iostream>
using namespace std;
int isAP(int num)
{
    return ((3 * num) + 7);
}
int main()
{
    int n, x;
    cin >> n;
    x = isAP(n);
    cout << x;

    return 0;
}
