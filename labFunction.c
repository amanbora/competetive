#include<stdio.h>
void fac(int);
int main(){
int a;
printf("enter a numbers\n");
scanf("%d",&a);
fac(a);
return 0;
}
void fac(int a){
  int f=1;
  for(int i=1;i<=a;i++){
    f=f*i;
  }
  printf("%d",f);
  return;
}
