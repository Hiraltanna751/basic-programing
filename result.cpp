#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c, sum;
    float percentage;
    cout << "Enter marks of Maths:-";
    cin >> a;
    cout << "Enter marks of English:-";
    cin >> b;
    cout << "Enter marks of Science:-";
    cin >> c;
    sum = a + b + c;
    percentage = (sum / 300 * 100);
    cout << percentage << "%" << endl;
    if (a <= 33 && b <= 33 && c <= 33)
    {
        cout << "Oops you are fail in every subject";
    }
    else if ((a >= 33 && b >= 33 && c >= 33))
    {
        cout << "Congratulations you are pass in every subject"
             << " "
             << "with";
    }
    else
    {
        if (a <= 33)
        {
            cout << "Oops you are Fail in Maths subject" << endl;
        }

        if (b <= 33)
        {
            cout << "Oops you are Fail in English subject" << endl;
        }

        if (c <= 33)
        {
            cout << "Oops you are Fail in Science subject" << endl;
        }
    }

    if (percentage >= 90)
    {
        cout << " "
             << "A+ grade";
    }
    else if (percentage >= 80)
    {
        cout << " "
             << "A grade";
    }
    else if (percentage >= 75)
    {
        cout << " "
             << "B+grade";
    }
    else if (percentage >= 65)
    {
        cout << " "
             << "B grade";
    }
    else if (percentage >= 55)
    {
        cout << " "
             << "C+ grade";
    }
    else if (percentage >= 45)
    {
        cout << " "
             << "C grade";
    }
    else if (percentage >= 35)
    {
        cout << " "
             << "D grade";
    }
}