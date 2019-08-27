#include<iostream>
using namespace std;
typedef long long int ll;

int main(){

    ll t,k,p1,p2=0;

    cin>>t;
    while(t--){
          cin>>p1>>p2>>k;

          ll point=p1+p2;
          ll n=point/k;
          if(n%2==0)cout<<"CHEF";
          else cout<<"COOK";
          cout<<endl;
    }

}
