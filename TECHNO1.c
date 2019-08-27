#include<stdio.h>
int main(){
  int n,k;
  scanf("%d",&n);
  scanf("%d",&k);
  int p[n],sum=0;
  for(int i=0;i<n;i++){
    scanf("%d",&p[i]);
    sum=p[i]+sum;
  }
  int shared;
  scanf("%d",&shared);
  for(int i=0;i<n;i++){
    if(i==k)
     sum=sum-p[i];
  }
  if(sum/2==shared)
    printf("fair");
  else
    printf("%d",shared-sum/2);

  }
