#include <bits/stdc++.h>
using namespace std;
int a[1000001], c = 0;

int dp_trial(int sum, int n){
    if(sum>n){
        return 0;
    }
    if(sum==n){
        c++;
    }
    
}

void solve()
{
    
    memset(a, -1, sizeof a);
    int n;
    cin>>n;
    dp_trial(0, n);
    cout<<c;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}