#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long n, x;
        cin >> n >> x;
        long long k, ans = x, m = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            ans = max(ans, k | x);
        }
        cout << ans << '\n';
    }
}
