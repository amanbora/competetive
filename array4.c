#include<stdio.h>
int main(){
  int arr[5],max,min;
  printf("Name- AMAN ALAM BORA\nRoll No- 1704010\n");
  for(int i=0;i<5;i++){
    printf("Enter element\n");
    scanf("%d",&arr[i]);
  }
  max=arr[0]; min=arr[0];
  for(int i=1;i<5;i++){
    if(arr[i]>max)
      max=arr[i];
    if(arr[i]<min)
      min=arr[i];
  }
  printf("Minimum= %d",min);
  printf("\nMaximum= %d",max);
  return 0;
}
