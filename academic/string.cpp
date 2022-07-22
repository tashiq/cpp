#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[1000],c;
    int i=0;
    while(1){
        cin>>c;
        if(c=='\n')
            break;
        cout<<c;
        ch[i++] = c;
    }
}
