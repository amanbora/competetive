#include<stdio.h>
int palin(int);
int main(){
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
      int p;
      scanf("%d",&p);
      for(int j=2;j<=p;j++){
        int c=0;
        for(int k=2;k<=j;k++)
        {
          if(j%k==0)
            c++;
        }
        if(c==1||palin(j)==1)
          printf("%d ",j) ;
      }
    }
  }
  int palin(int x){
    int c=0,s=0; 
    int t=x;
    while(t>0){
      t=t/10;
      c++;
    }
    t=x;
    while(t>0){
      int d=t/10;
      t=t/10;
      s=s+d*pow(10,c);
      c--;
    }
    if(s==x)
     return 1;
  }
