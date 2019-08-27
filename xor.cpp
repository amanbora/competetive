#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;


    while(t--){

        int n;
        cin>>n;



        long long int arr[50005];
        long long int xo[50005];


        cout<<1<<" "<<1<<" "<<2<<" "<<3<<flush<<endl;
        cin>>xo[1];
        cout<<1<<" "<<1<<" "<<2<<" "<<4<<flush<<endl;
        cin>>xo[2];
        cout<<1<<" "<<1<<" "<<3<<" "<<4<<flush<<endl;
        cin>>xo[3];
        cout<<1<<" "<<2<<" "<<3<<" "<<4<<flush<<endl;
        cin>>xo[4];

        arr[1]=xo[1]^xo[2]^xo[3];

        arr[2]=xo[4]^xo[3]^arr[1];

        arr[3]=xo[1]^arr[1]^arr[2];

        arr[4]=xo[2]^arr[1]^arr[2];

        // cout<<arr[1]<<arr[2]<<arr[3]<<arr[4];


        for(int i=5;i<=n;i++){

              cout<<1<<" "<<1<<" "<<2<<" "<<i<<flush<<endl;

              long long int a;

              cin>>a;

              arr[i]=a^arr[1]^arr[2];
        }


        cout<<2<<" "<<flush;
        for(int i=1;i<=n;i++){

            cout<<arr[i]<<" "<<flush;
        }

        cout<<endl;

        int ans;
        cin>>ans;
    }
}
