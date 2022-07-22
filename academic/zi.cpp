#include<bits/stdc++.h>
using namespace std;
int main(){
    float f, t;
    cin>>f;


    union{
        float f;
        uint32_t t;
    }digit = {.f = f};

    int n = 32;
    while(n--){
        printf("%d ",digit.t<<n & 0x1);
    }
}
