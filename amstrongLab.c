#include<stdio.h>
#include<math.h>
void amstrong(int);
int main(){
int a;
printf("enter a numbers\n");
scanf("%d",&a);
amstrong(a);
return 0;
}
void amstrong(int a){
  int t=a,c=0,s=0;
  while(t>0){
    int d=t%10;
    t=t/10;
    c++;
  } t=a;
  while(t>0){
    int d=t%10;
    t=t/10;
    s=s+pow(d,c);
  }
  if (s==a) printf("Amstrong");
  else printf("Not amstrong");
  return;
}
