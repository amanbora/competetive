#include<stdio.h>
int fib(int,int);
int main(){
  int n,k;
  scanf("%d",&n);
  scanf("%d",&k);
  printf("%d",(fib(n,k)%1000000007));
  return 0;
}
int fib(int n,int k){
  int t=0;
  if(n<=k){
    return 1;
  }
  else{
    for(int i=1;i<=k;i++){
      t=t+fib(n-i,k);
    }
    return t;
  }
}
