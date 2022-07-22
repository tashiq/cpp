#include<bits/stdc++.h>
using namespace std;
double d;
#define f(x) x*x*x - x*x + 2
double random_number(double a , double b){
      srand(time(0));
      int n = rand();
      double range = b-a;
      return ((n/float(RAND_MAX))*range)+a;
}
void bisection_method(double a, double b){
  float c;
    if(f(a)*f(b)>=0){
        cout<<"INVALID GUESS"<<endl;
        return;
    }
    while(b-a > 0.0001){
        c = random_number(a, b);
        if(f(c) == 0){
            break;
        }
        else if(f(a)<0 && f(c)<0) a = c;
        else b = c;
    }
 cout<<"root is:"<<" "<< c;
 }
int main(){
      srand(time(0));
      double a=-300, b = 100;
      bisection_method(a,b);


}

