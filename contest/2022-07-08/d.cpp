#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin>>tt;
    while(tt--){
        string s;
        int p, a[27];
        long long sum = 0;
        cin>>s>>p;
        memset(a, 0, sizeof a);
        
        for(int i = 0; i<s.length(); i++){
            a[s[i]-'a' + 1]++;
            sum+= s[i]-'a' + 1;
        }
        for(int i=26; i>0; i--){
            char c = 'a'+i-1;
            bool check = sum - a[i]*i > p;
            if(a[i]&& sum - a[i]*i > p){
                sum -= a[i]*i;
                a[i] = 0;
            }
            else if(a[i]){
                int required = sum - p;
                required = ceil(required/(float)i);
                a[i]-=required;
                break;
            }
            
        }
        for(int i=0; i<s.length(); i++){
            if(a[s[i]-'a'+1]){
                cout<<s[i];
                a[s[i]-'a'+1]--;
            }
        }
        cout<<'\n';
    }

    return 0;
}