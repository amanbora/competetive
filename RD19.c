#include<stdio.h>
int prime(int);
int main(){
  int t,c=0,count=0;
  scanf("%d",&t);
  while(t--){
    int n[1000],size;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
      scanf("%d",&n[i]);
      int x=prime(n[i]);
      if(x==1)
        c++;

}

    if(c==0)
     count=0;
    else if(c==size)
      count=-1;
     else if(c==(size-1))
      count=-1;
    else
      count=c;
 printf("%d\n",count);
 count=0;c=0;
}
}
int prime(int n){
  for(int i=2;i*i<=n;i++){
    if(n%i==0)
       return 1;
  }
  return -1;
}

  /*
    void mergeSort(n,0,n-1);


    int c=0;
    if(size==1)
      {
        if(n[0]!=1)
          c=-1;
        else
           c=0;
       }





      if(size==2){
        int p=gcd(n[0],n[1]);
        if(p!=1){
          int z;
          for(int i=0;i<2;i++)
          { int x=prime(n[i]);
             if(x==-1)z++;

          }
          if(z==0)
               c=-1;
          else if(z==1)
              c=1;
          else
              c=0;
        }
      }


      if(size>2){

      }




}

int gcd(int a,int b){
  if(b==0)
    return a;
  else
     return gcd(b,a%b);
}












*/
