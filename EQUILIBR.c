#include<stdio.h>
#include<math.h>

long modInverse(long a, long m);

int main(){
  long n;
  int k;
  scanf("%ld%d",&n,&k);

  long fact1=1,fact2=1,fact3=1;



  for(int i=2; i<n+k ;i++)

       fact1=(fact1*i);
  //printf("%ld\n",fact1);

   for(int i=2; i<k ;i++)

        fact2=(fact2*i);
  //printf("%ld\n",fact2);

    for(int i=2; i<n+1 ;i++)

         fact3=(fact3*i);
//  printf("%ld\n",fact3);

    long fact=fact1/((fact2*fact3));
    long mod = pow(10,9)+7;

    printf("%ld",modInverse(fact,mod));

}
long modInverse(long a, long m)
{
    a = a%m;
    for (long x=1; x<m; x++)
       if ((a*x) % m == 1)
          return x;
}
