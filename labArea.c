#include<stdio.h>
#include<math.h>
void area(float *,int,int,int);
int main(){
int a,b,c;
printf("enter 3 sides\n");
scanf("%d%d%d",&a,&b,&c);
float s=(a+b+c)/2.0;
area(&s,&a,&b,&c);
return 0;
}
void area(float *p,int *a,int *b,int *c){
  float ar;
  ar= (*p)*(*p - *a)*(*p - *b)*(*p - *c);
  float area=pow(ar,.5);
  printf("Area=%f",area);
}
