#include<stdio.h>
#include<stdbool.h>
int main()
{
  int n,i,k,m=0,c;
  bool a[1000];
  scanf("%d\n",&n);
  for(i=2;i<=n;i++)
     a[i]= true;
     c=pow(n,0.5);
  for(i=2;i<=c;i++)
    {
      if(a[i]==true){
        for(k=i*i;k<=n;k+=i)
          a[k]=false;
      }
    }

    for(i=2;i<=n;i++)
      {
        if(a[i]==true){
           m++;
          printf("%d ",m);
        }
      }
    return 0;
}
