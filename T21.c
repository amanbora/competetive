#include<stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    long n,m;

    scanf("%ld",&n);
    scanf("%ld",&m);
    int rem1=n%3;
    int rem2=m%3;
    int rem=rem1*rem2;
    rem=rem%3;
    printf("%d",rem);
    printf("\n");
  }
}
