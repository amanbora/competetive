#include<stdio.h>
int main(){
  int n[100000];
  int k,given;
  scanf("%d",&k);
  scanf("%d",&given);
  for(int i=0;i<k;i++){
    scanf("%d",&n[i]);
  }
  int j=1,value=0,c=0,sum=0;
  while(j<k){
   for(int i=0;i<j;i++){
      for(int p=0;p<k;p++){
        sum=value+n[i];
        if(sum<=given)
          c++;

      }
  }
  j++;
}
printf("%d",c);
}
