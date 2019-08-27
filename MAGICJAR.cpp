#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>


typedef long long int ll;

using namespace std;

int main(){

      int t;
      cin>>t;

      while(t--){

            // set <ll, greater<ll> > ssD;
            vector <ll>  ssA;

            vector<ll>:: iterator itr;

            long n;
            cin>>n;

            for(int i=0;i<n;i++){
                ll a;
                cin>>a;
                ssA.push_back(a);
                // ssD.insert(a);
            }

            sort(ssA.begin(),ssA.end());

            ll ans=0;
            // for(itr=ssA.begin();itr!=ssA.end()-1;itr++){
            //     cout<<*itr<<" ";
            // }

            for(itr=ssA.begin();itr!=ssA.end()-1;itr++){
                ans+=*itr-1;
            }
            // cout<<*itr<<" ";

            ans+=*itr;


            cout<<ans;
            cout<<endl;
      }
}
