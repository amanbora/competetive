#include<iostream>
#include <string.h>
typedef long long int ll;

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        ll n,k;
        cin>>n>>k;
        ll height[100005],dp[100005];
        memset(dp,0,100005);
        for(ll i=0;i<n;i++){
            cin>>height[i];
        }

        ll ans=0,ind=0;

        for(ll i=1;i<n;i++){
            int sum = 0;
            if(height[i]<=k && i<n){
                dp[i] = dp[i-1]+height[i];
            }
          ans = max(dp[i],ans);
        }
        cout<<ans<<endl;
    }
}
