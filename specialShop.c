#include<stdio.h>
#include<math.h>
int main(){
  long t;
  scanf("%ld",&t);
  while(t--){
    double n,a,b,x,y;
    scanf("%lf",&n);
    scanf("%lf",&a);
    scanf("%lf",&b);

    x=ceil((n*b)/(a+b));
    y=n-x;
    long amt = a*pow(x,2.0)+b*pow(y,2.0);
    printf("%ld\n",amt);
  }
}
