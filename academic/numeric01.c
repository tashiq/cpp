#include<stdio.h>
#include<math.h>
#include<limits.h>
#include <stdint.h>

int main(){
    float f = 3.4444f;
    union {
        float f;
        uint32_t u;
    } fu = { .f = f };
    printf("%f\n", fu.f);
    int n = sizeof(f)*CHAR_BIT;
    while(n--){
        printf ("%d ", (fu.u >> n) & 0x1);
    }

}
