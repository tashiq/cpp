#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a(5);
    int x;
    for(int i =0 ;i<5; i++){
        cin>>x;
        a[i] = x;
    }
    sort(a.begin(), a.end());
    long long sum1 = 0, sum2=0;
    for(int i=0; i<5; i++){
        if(i<4){
            sum1+=a[i];
        }
        if(i>0) sum2+=a[i];
    }
    cout<<sum1<< " "<<sum2;

}
