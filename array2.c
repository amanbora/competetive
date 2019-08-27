#include<stdio.h>
int main(){
  int arr[5],sum=0;
  printf("Name- AMAN ALAM BORA\nRoll No- 1704010\n");
  for(int i=0;i<5;i++){
    printf("Enter element\n");
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<5;i++){
    sum=sum+arr[i];
  }
  printf("sum of elements=%d",sum);
  return 0;
}
