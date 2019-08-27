#include<stdio.h>
int sum(int, int); void swap(int,int);
int main(){
int a,b;
printf("enter two numbers\n");
scanf("%d",&a);
scanf("%d",&b);
int sum=sum(a,b);
printf("Sum=%d",sum);
swap(a,b)
}
sum(int a,int b){
 int sum=a+b;
 return sum;
}
swap(int a, int b){
  int t=a;
  a=b;
  b=t;
  printf("Swapped values are- %d %d",a,b);
}
