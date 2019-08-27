#include<stdio.h>
int main()
{ int a[6];int key;
  for(inti=0;i<6;i++)
  {scanf("%d",&a[i]);
 }
 for(int j=1;j<a.length();j++)
 { key=a[j];
   int i=j-1;
   while(i>0 && a[j]>key)
   {
     a[i+1]=a[i];
     i--;
   }
   a[i+1]=key;
 }
  return 0;
}
