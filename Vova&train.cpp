#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;


int main(){

    int t;
    cin>>t;

    ll arr[10000][4];

    for(int i=0;i<t;i++){
      for(int j=0;j<4;j++){

          cin>>arr[i][j];
      }
    }


    for(int i=0;i<t;i++){
        ll count=0;

        ll key=arr[i][1];

        if(key==1){
          count= (arr[i][2]-1) + (arr[i][0]-arr[i][3]);
        }

     //cout<<(arr[i][2]-1)/key<<endl<<ceil(float(arr[i][0]-arr[i][3])/key)<<endl;
        else {
        count= (arr[i][2]-1)/key;

        for(int j=arr[i][3]+1;j<=arr[i][0];j+=key){
            if(j%key==0)count++;
        }


      }
        cout<<count<<endl;

    }
}
