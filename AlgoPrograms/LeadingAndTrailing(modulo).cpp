#include<iostream>
#include<math.h>
typedef long long int ll;
#define modulo 1000000000 ;

using namespace std;

ll calcExp(ll n, ll k){
    n%=modulo;
    ll ans=1;
    while(k){
        if(k&1)
            ans=ans*n%modulo;
        n=n*n%modulo;
        k=k>>1;
    }
    return ans;
}


int main(){
    int t;
    cin>>t;
    while(t--){

          ll n,k;
          cin>>n>>k;

          ll num=calcExp(n,k);
          int last=num%1000;

          double x = k*log10(n);
          x=x-(int)x;
          x = pow(10,x);
          int first = 100*x;
          cout<<first<<"..."<<last<<endl;
    }
}
