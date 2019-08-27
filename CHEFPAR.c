#include<stdio.h>
#include<stdlib.h>
int nextPrime(int);
int main(){
 int n,m,k;
  int upper=1000000000;
 scanf("%d",&n);
 scanf("%d",&m);
 scanf("%d",&k);



 int num[10000],p[10000],add[10000],prod=1;
 for(int i=0;i<n;i++){
   scanf("%d",&num[i]);
   num[i]=num[i]+rand()%k;
   printf("%d ",num[i]);
   prod=prod*num[i];

 }
 for(int i=0;i<n;i++){
   scanf("%d",&p[i]);
}
 int sum=0;

 for(int i=0;i<m;i++)
 {
   sum=sum+prod%p[i];
 }
  int b=sum/m;
}/*
int nextPrime(x){
  for(int i=x+1;;i++){
    int c=0;
    for(int j=2;j<i;j++){
      if(i%j==0)
        c=1;
    }
    if(c==0)
      return i;
  }
}*/
