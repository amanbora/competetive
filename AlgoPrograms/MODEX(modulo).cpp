#include<iostream>
typedef long long int ll;

using namespace std;
ll expFunc(ll a,ll b, ll n){
    a=a%n;

    ll ans=1;
    while(b){
        if(b&1)
            ans = ans*a%n;

        a = a*a%n;
        b = b>>1; // b=b/2

    }
    return ans;
}
int main(){

        int c;
        cin>>c;

        while(c--){
            ll x,y,n;
            cin>>x>>y>>n;

            ll exp = expFunc(x,y,n);

            cout<<exp<<endl;
        }

}
