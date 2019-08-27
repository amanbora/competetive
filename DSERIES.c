#include<stdio.h>
int main(){
  int q;
  scanf("%d",&q);
  while(q--){
    long n,t;
    scanf("%ld",&n);
    scanf("%ld",&t);
    long prod=1,sum=0;

      for(long j=2;j<=t+1;j++){
        prod=prod*j;
      }
      sum=prod;
      if(n==1){
        sum=prod;
      }
      else
      {
          for(long i=2;i<=n;i++){
            prod=(prod/i)*(t+i);
            sum=sum+prod;
          }
       }

    printf("%ld",(sum%1000000007));
    printf("\n");
  }
}
