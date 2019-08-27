#include<stdio.h>
int main()
{ int a[6];int key;
  for(int i=0;i<6;i++)
  {scanf("%d",&a[i]);
 }
 for(int j=1;j<6;j++)
 { key=a[j];
   int i=j-1;
   while(i>0 && a[i]>key)
   {
     a[i+1]=a[i];
     i--;
   }
   a[i+1]=key;
 }
 for(int i=0;i<6;i++)
  printf("%d",a[i]);
  return 0;
}
