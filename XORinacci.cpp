#include<iostream>
typedef long long int ll;

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        int x = c%3;
        if(x==1)cout<<b;
        else if(x==2)cout<<(a^b);
        else cout<<a;
        cout<<endl;
    }
}
