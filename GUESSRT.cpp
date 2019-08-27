#include<iostream>
typedef long long int ll;
using namespace std;





void calcD(ll i,ll n,ll m,ll k, ll denom[105]){


    ll n1=n;

    if(m==1){
        return;
    }
    else{

          if(n1>k){
              if(n1%k!=0)
                n1 = n%k;
              else
                n1 = (n/k-1)*k;
          }
          else
              n1=n+k;
    }
    denom[i]=n1*n;

    calcD(i+1,n1,m-1,k,denom);
}


void calcN(ll i,ll n,ll m,ll k, ll num[105], ll denom[105]){
    for(int i=1;i<m;i+=1){
        if(i%2)
          num[i]=denom[i-1]-1;
        else num[i]=1;
    }
}




int main(){

    ll t;
    ll n,k,m;
    cin>>t;
    while(t--){
        cin>>n>>k>>m;


        ll denom[105];
        ll num[105]={1};



        calcD(1,n,m,k,denom);

        // if(n%k==0)
        //   {
        //         denom=denom + k - ((m+1)/2)*k*(n-1/k);
        //
        //   }
        // else {
        //     if(n<=k){
        //         denom=denom - ((m-1)/2) * k*(n/k) + k*(m-1);
        //     }
        //     else{
        //         denom=denom + k*(m-1) - ((m+1)/2)*k*(n/k);
        //     }
        // }
        denom[0]=n;


        calcN(1,n,m,k,num,denom);

        for(int i=0;i<m;i++){
            cout<<denom[i]<<" ";
            // cout<<endl;
            // cout<<num[i]<<" ";
        }


    }
}
