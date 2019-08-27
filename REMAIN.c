#include<stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    long n,m;
    scanf("%ld",&n);
    scanf("%ld",&m);
    if((n%m)%2==0)
      printf("EVEN");
    else
      printf("ODD");
    printf("\n");
  }
}
