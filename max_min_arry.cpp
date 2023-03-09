#include <iostream>
using namespace std;

int max(int num[])
{
    int max = num[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < num[i + 1])
            max = num[i + 1];
    }
    return max;
}
int min(int num[])
{
    int min = num[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > num[i + 1])
            min = num[i + 1];
    }
    return min;
}

int main()

{
    int num[5];
    for (int i = 0; i < 5; i++)
        cin >> num[i];
    cout << "max: " << max(num) << endl;
    cout << "min: " << min(num) << endl;
    return 0;
}