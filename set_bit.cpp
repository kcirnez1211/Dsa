#include <iostream>
using namespace std;
int count(int a, int b)
{
    int count = 0;
    for (int i = 1; a != 0 && b != 0; i++)
    {
        /* code */
        if (a & 1 == 1)
            count++;
        if (b & 1 == 1)
            count++;
        a = a >> 1;
        b = b >> 1;
    }
    return count;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << count(a, b);
    return 0;
}