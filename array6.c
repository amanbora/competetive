#include<stdio.h>
int main(){
  int mat1[3][3],mat2[3][3],multi[3][3],sum=0;
  printf("Name-Aman Alam Bora\nRoll no-1704010\n");
  printf("Enter elements of first matrix\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&mat1[i][j]);
    }
    printf("\n");
  }
  printf("Enter elements of second matrix\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&mat2[i][j]);
    }
    printf("\n");
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      sum=sum+mat1[i][j]*mat2[j][i];
    }
    multi[i][j]=sum;
    sum=0;
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d  ",mat1[i][j]);
    }
    printf("\n");
  }
  return 0;
}
