#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        int tt;
        cin >> tt;
        while (tt--)
        {
            int n;
            cin >> n;
            int size = 0, ans = 0, k;
            for (int i = 0; i < n; i++)
            {
                cin >> k;
                if (k)
                {
                    size++;
                }
                else if (size)
                {
                    ans++;
                    size = 0;
                }
            }
            if (size)
                ans++;
            if (ans > 1)
                ans = 2;
            cout << ans << '\n';
        }
    }
}