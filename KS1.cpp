#include<iostream>
typedef long long int ll;
using namespace std;

ll arr[100005];

ll count(ll n){

    ll x[100005] = {0};
    ll start=0, end=0, ans=0,beg=0;

    x[0] = arr[0];
    for(int i=1;i<n;i++){
        x[i] = x[i-1]^arr[i];
    }
    for(int i=0;i<n;i++){
      cout<<x[i]<<"  ";
      if(x[i]==0){
            ans += i;
      }
      ll start = i+1;
      while()
       for(int j=i+1; j<n;j++){
            ll s = x[j]^x[i];
            if(s==0){
                ans += j-i-1;
            }
       }
    }
    cout<<endl;

    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<count(n)<<endl;



    }
}
