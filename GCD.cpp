#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num1, num2 = 0;
    int gcd = 1;
    cin >> num1 >> num2;

    int mini = min(num1, num2);

    for (int i = 1; i <= mini; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    cout << gcd;
}