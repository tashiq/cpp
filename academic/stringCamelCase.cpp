#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[100], c;
    int i=1;
    a[0] = ' ';
    cin>>a;
    int j=0;
    while(j<i){
        if(a[j]>='A'){
            if(a[j]<='Z'){
                if(a[j-1]!=' '){
                    a[j]+=32;
                }
            }
        }
        j++;
    }
    j=0;
    while(j<i){
        if(a[j]==' '){
            if(a[j+1]>='a'){
                if(a[j+1]<='z'){
                    a[j+1]-=32;
                }
            }
        }
        j++;
    }
    cout<<a<<endl;
}
