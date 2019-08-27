#include<iostream>
typedef long long int ll;
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--) {
        ll num;
        cin>>num;
        ll c=0;

          for(int i=5;num/i>=1;i=i*5){
            c+=num/i;

          }

        cout<<c<<endl;
    }

}
