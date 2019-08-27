#include<stdio.h>
void cswap(int *,int *,int *);
int main(){
int x,y,z;
printf("enter three numbers\n");
scanf("%d%d%d",&x,&y,&z);
cswap(&x,&y,&z);
return 0;
}
void cswap(int *a, int *b,int *c){
  int t=*a;
  *a=*b;
  *b=*c;
  *c=t;
  printf("%d %d %d",*a,*b,*c`);
}
