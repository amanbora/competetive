#include<stdio.h>
#include<math.h>
#include<stdlib.h>
long long int power(long long int,long long int);
int main(){
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    long long int n ,c;int w;
    scanf("%lld",&n);
    scanf("%d",&w);
      long long int prod=power(10,n-2) ;
     if(w>=0&&w<=8)
       c=((9-w)*prod)%1000000007;
      else if(w>=-9&&w<0)
         c=((10-abs(w))*prod)%1000000007;
         else
           c=0;
      printf("%lld\n",c);
   }
}
long long int power(long long int x,long long int y)
{
  long long int res=1;
  while(y>0){
    if(y&1)
      res=(res*x)%1000000007;
    y=y>>1;
    x=(x*x)%1000000007;
  }
  return res;
}
