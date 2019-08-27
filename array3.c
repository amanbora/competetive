#include<stdio.h>
int main(){
  int arr[5];
  printf("Name- AMAN ALAM BORA\nRoll No- 1704010\n");
  for(int i=0;i<5;i++){
    printf("Enter element\n");
    scanf("%d",&arr[i]);
  }
  for(int i=4;i>=0;i--){
    printf("%d ",arr[i]);
  }
  return 0;
}
