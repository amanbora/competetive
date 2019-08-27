#include<stdio.h>
#include<math.h>
int main(){
  long long t;
  scanf("%lld",&t);
  while(t--){
    long a,b;
    scanf("%ld%ld",&a,&b);
    long long p=pow(a+b,2);

    long x = round((a+b - pow(p-(3*a*b),.5))/3);

    a=a-x;
    b=b-x;
    long long vol=a*b*x;
    printf("%d %lld",x,vol);
    printf("\n");

/**  long vol=0;
  if(a>b){
  for(int i=1; i<=b/2; i++){
     long v2=(a-i)*(b-i)*i;
     if(v2>vol){
       vol=v2;
       x=i;
     }
   }
 }
 else{
   for(int i=1; i<=a/2; i++){
      long v2=(a-i)*(b-i)*i;
      if(v2>vol){
        vol=v2;
        x=i;
      }
    }
 }

   printf("%d %ld",x,vol);
   printf("\n");
*/
  }
}
