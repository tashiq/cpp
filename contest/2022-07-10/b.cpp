#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        int ans = 1;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            set<char> subs;
            for (int j = i; j < s.length(); j++)
            {
                subs.insert(s[j]);
                if (subs.size() > 3)
                {
                    i--;
                    ans++;
                    break;
                }
                i++;
            }
        }
        cout << ans << endl;
    }
}
