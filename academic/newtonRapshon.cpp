#include<bits/stdc++.h>
using namespace std;
#define f(x) x*x*x - x*x + 2
#define g(x)= 3*x*x = 2*x;
double random_number(double a , double b){
      srand(time(0));
      int n = rand();
      double range = b-a;
      return ((n/float(RAND_MAX))*range)+a;
      }
void rapshon(float a,float b){
    float c;
    if(f(a)*f(b)>=0){
        cout<<"INVALID GUESS"<<endl;
        return;
    }
    while(b-a > 0.01){
        c = random_number(a, b);
        if(f(c) == 0){
            break;
        }
        else if(f(a)<0 && f(c)<0) a = c;
        else b = c;
    }
    cout<<"Solution is "<<c<<endl;
}
int main(){
    bisection(-300, 100);
}
