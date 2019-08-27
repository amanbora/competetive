#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  for(int i=1;i<=t; i++)
  { int puzz[3][3];
    for(int j=0; j<3;j++){
      for(int k=0;k<3;k++){
        scanf("%d",&puzz[j][k]);
      }
      for(int j=0; j<3;j++){
        for(int k=0;k<3;k++){
           if(prime(puzz[j][k]==1])){
             int t=puzz[j][k];
             puzz[j][k]=puzz[j][k+1];
             puzz[j][k+1]=t;

           }
          }

    }
  }
}
int prime(int a)
{
  for(int i=2;i<a;i++)
  {
    if(a%i==0)
      return 1;
    else
      return 0;
  }
}
