#include<stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int x;
    scanf("%d",&x);
    int c=0;
    if(x%10==0)
      c=0;
    else {
       if(((x%10)*2)%10==0){
          while(x%10!=0)
          {  x=x*2;
            c++;
          }
       }
       else c=-1;
    }
    printf("%d\n",c);
  }
}
