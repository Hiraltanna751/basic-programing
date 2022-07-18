#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, a, flag = 0;
    cout << "Enter a number:";
    cin >> a;
    for (i = 2; i < a; i++)
    {
        if ((a % i) == 0)
        {
            cout << "This is a Composite Number";
            flag = 1;
        }
        else
        {
            continue;
        }
        break;
    }
    if (flag == 0)
    {
        cout << "This is a Prime Number";
    }
}
