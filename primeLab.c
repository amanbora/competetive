#include<stdio.h>
void prime(int);
int main(){
int a;
printf("enter a numbers\n");
scanf("%d",&a);
int c=prime(a);
return 0;
}
void prime(int a){
  int c=0;
  for(int i=1;i<=a;i++){\
    if(a%i==0) c++;
  }
  if (c==2)printf("Prime");
  else printf("Not prime");
  return;
}
