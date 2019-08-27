#include<iostream>
using namespace std;
typedef long long int ll ;

int main(){
    ll num;
    cin>>num;

    if(num==3)
        cout<<"1"<<" "<<"1 "<<"1";
    
    else {
        if((num-2)%3==0)
            cout<<"1"<<" "<<"2"<<" "<<num-3;
        else
            cout<<"1"<<" "<<"1"<<" "<<num-2;

    }

}
