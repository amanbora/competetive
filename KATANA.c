#include<stdio.h>
int main(){
  long n;
  scanf("%ld",&n);
  long arr[1000009];
  int flag1=0,flag2=0;
  for(long i=0;i<n;i++){
    scanf("%ld",&arr[i]);
    if(arr[i]==1)flag1=1;
    else flag2=1;
 }
 long c=0,count=0;
 if(flag1==0 || flag2==0)
   c=1;
 else{
     if(arr[0]==2)count++;
    for(int i=0;i<n;i++)
    {
      arr[i]=arr[i]-1;
    }
    for(long i=0;i<n-1;i++){
      if(arr[i]==0 && arr[i+1]!=0)count++;
    }

    c=1+count;
  }
  printf("%ld",c);

}
