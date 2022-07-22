#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;

        s[0] = s[0] - '1' + '0';
        int x = 0;
        for (int i = 0; i < s.length(); i++)
            x = x * 10 + s[i] - '0';
        cout << x << endl;
    }
}
