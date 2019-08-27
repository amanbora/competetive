#include<stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  for(int i=1;i<=t;i++){
    int n,sum=0,a[n];
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
     scanf("%d",&a[i]);
     sum=sum+a[i];
    }
    if(sum%2!=0)
     printf("YES");
    else
     printf("NO");
     printf("\n");
  }
}
