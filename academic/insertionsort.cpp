#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        a[i] = rand();
        if(i>0){
            int temp = a[i], pos=i;
            while(a[pos-1]>temp){
                a[pos] = a[pos-1];
                pos--;
            }
            a[pos] = temp;
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<' ';
    }
}
