#include<bits/stdc++.h>
using namespace std;
void float_rep(float f){
    union{
        float f;
        uint32_t u;
    }digit = {.f = f};
    int n = 32;
    while(n--){
        printf("%d ", digit.u>>n & 0x1);
    }
    printf("\n");
}
void double_rep(double d){
    union{
        double d;
        uint64_t u;
    } digit = {.d = d};
    int n = sizeof(d) * CHAR_BIT;
    printf("%.22lf\n", d);
    while(n--){
        printf("%d ", (digit.u>>n) & 0x1);
    }
}
int main(){
    float f = 2.3424f;
    float_rep(f);
}
