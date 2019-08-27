#include<stdio.h>
#include<math.h>
#include<limits.h>


//typedef long long int ll;
//long gcd( long, long );
/*ll gcdLarge(char a[], char b[]);
ll reduceB(char a[], char b[]);
ll gcd(ll a, ll b);
*/

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
     long n,p,q;
     int arr[100000];
    scanf("%ld",&n);
    if(n%2==0)
  //    p=pow(10,n/2-1);
        p=n/2;

    else
  //    p=pow(10,(n-1)/2);
     p=(n-1)/2;

  /*  q=pow(10,n-1);
    char* qu=(char*)&q;
    char* pu=(char*)&p;
     long hcf=gcdLarge(pu,qu);
*/

 arr[0]=1;

   for(int i=1;i<=p;i++){

     arr[i]=0;


   }
   printf("%d ",1);
   for(int i=0;i<=p;i++)printf("%d",arr[i]);


   printf("\n");

  }
}

 /*long gcd( long p, long q){

  if(p==0)return q;
  else return gcd(q%p,p);
}

ll gcd(ll a, ll b)
{
    if (!a)
       return b;
    return gcd(b%a,a);
}





ll reduceB(char a[], char b[])
{
    // Initialize result
    ll mod = 0;

    // calculating mod of b with a to make
    // b like 0 <= b < a
    for (int i=0; i<strlen(b); i++)
        mod = (mod*10 + b[i] - '0')%int*(&a);

    return mod; // return modulo
}

// This function returns GCD of 'a' and 'b'
// where b can be very large and is represented
// as a character array or string
ll gcdLarge(char a[], char b[])
{
    // Reduce 'b' (second number) after modulo with a
    ll num = reduceB(a, b);

    // gcd of two numbers
    return gcd(a, num);
}
*/
