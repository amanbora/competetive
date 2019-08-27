#include<iostream>
using namespace std;
#define modulo 1000000007

int main(){

    int t,n,arr[100005];

    cin>>t;
    while(t--){
        int ans=0;
        int num[100005]={0};
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            num[arr[i]]++;
        }

        int flag=1;
        long mult=1;
        for(int i=1;i<n+1;i++)
        {
          if(num[i]==n)
          {  flag==1;
             break;
          }

          else if(num[i]>1)
          {
              flag=2;
              mult=(mult*num[i])%modulo;
          }

        }

        if(flag==0)ans=1;

        else ans=mult;
        cout<<ans<<endl;
    }
}
