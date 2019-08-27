#include<stdio.h>

int main(){
  int n,m,arrA[100],arrC[100];

  scanf("%d",&n);

  scanf("%d",&m);

  for(int i=0;i<n;i++)
     scanf("%d",&arrA[i]);
   for(int i=0;i<n;i++)
      scanf("%d",&arrC[i]);


  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      int b=arrC[j]-arrA[i];
      printf("%d",b);
    }
    printf("\n");
  }


}
