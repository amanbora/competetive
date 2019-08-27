#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  for(int i=1; i<=t; i++)
  {
    long n, c1=1,c2=1;
    scanf("%ld",&n);
    unsigned long long fing[n];
    unsigned long long glov[n];
    for(int j=0;j<n;j++)
    {
      scanf("%llu",&fing[j]);

    }
   for(long j=0;j<n;j++)
    {
    scanf("%llu",&glov[j]);
    }

    for(long k=0;k<n;k++)
    {
      if(fing[k]<=glov[k])
         c1=0;
       else{
         c1=1; break;
        }
      }
    for(long k=0;k<n;k++)
    {
      if(fing[k]<=glov[n-1-k])
         c2=0;
       else{
         c2=1; break;
        }
    }
  if(c1==0&&c2==0)
      printf("both");
    else if(c1==0)
      printf("front");
  else if (c2==0) {
      printf("back");
    }
    else
     printf("none");
    printf("\n");
  }
  return 0;
}
