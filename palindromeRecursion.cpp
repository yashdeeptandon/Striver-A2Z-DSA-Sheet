#include <bits/stdc++.h>

using namespace std;

bool palindrome(int i, string &str, int n)
{
    if (i >= n / 2)
        return true;

    if (str[i] != str[n - i - 1])
    {
        return false;
    }

    return palindrome(i + 1, str, n);
}

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    cout << palindrome(0, str, n);
}