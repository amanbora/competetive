#include<iostream>
#include<set>
#define modulo 1000000007;
typedef long long int ll;

using namespace std;


set <ll> ss;


ll count(ll n,ll k){


      if(k==1)
          return n;

      ll g,l;

      if(k==2){

          g=n/2+1;
          l=n-g;
      }

      else{

          l=n/2;
      }



      dp[n]=count(g,2)




    }

    // if(k==2){
    //   if(n%2!=0)
    //       r=r+2;
    //   // else
    //   //     r=r-1;
    // }

    ss.insert(r);



    ll ans=(r*r-r)*count(n-r,k-1);

    return ans%modulo;
}


int main(){

    int t;
    cin>>t;
    while(t--){

        ll n,k;

        cin>>n>>k;

      //  if(k==2)n=n+1;


         if(n/k-1<0 )
            cout<<"-1";

        else{

            ll ans=count(n,k);
            cout<<ss.size()<<"   ";
            if(k-ss.size()==1)
                cout<<ans;

            else cout<<"-1";

        }
        cout<<endl;

        ss.clear();

          //  cout<<count(n,k)<<endl;
    }
}
