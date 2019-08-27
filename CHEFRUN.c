#include<stdio.h>
#include<stdlib.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int x1,x2,x3,v1,v2;
    scanf("%d%d%d%d%d",&x1,&x2,&x3,&v1,&v2);
      if(x1==x3)
        printf("Chef");
      else if(x2==x3)
        printf("Kefa");
      else if((abs(x3-x1)/v1)<(abs(x3-x2)/v2))
        printf("Chef");
      else if((abs(x3-x1)/v1)>(abs(x3-x2)/v2))
        printf("Kefa");
    else if((abs(x3-x1)/v1)==(abs(x3-x2)/v2))
        printf("Draw");
      printf("\n");
  }
}
