#include<iostream>
typedef long long int ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(k==1) cout<<"NO";
        else if((n/k)%k==0) cout<<"NO";
        else cout<<"YES";

        cout<<endl;

    }
}
