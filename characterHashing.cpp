#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int q;
    cin >> q;
    // precompute
    int hash[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i] - 'a']++;
    }
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
    }
}