#include<stdio.h>
int main(){
  long n, q,l,r,c;
  char p;
  char arr[100000][20];
  scanf("%ld",&n );
  for(long i=0;i<n;i++)
     scanf("%s",&arr[i][20]);
  scanf("%ld",&q );
  while(q--){
    long x=0;
    scanf("%ld%ld%ld",&l,&r,&c);
    scanf(" %c",&p);
    while(l<=r){
      if(arr[l++][c-1]==p)
        x++;
    }
    printf("%ld\n",x);
  }
}
