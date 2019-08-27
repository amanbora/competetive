#include<stdio.h>
void all(int *,int *,int *);
int main(){
int a,b,c;
printf("enter 3 numbers\n");
scanf("%d%d%d",&a,&b,&c);
all(&a,&b,&c);
return 0;
}
void all(int *p,int *q,int *r){
  float avg=(*p + *q + *r)/3.0;
  printf("Average=%f",avg);
  printf("mean=%f",avg);
}
