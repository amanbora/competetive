#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<math.h>
typedef long long int ll;

using namespace std;
int main(){

        int t;
        cin>>t;
        while (t--) {
          /* code */
          int n;cin>>n;
          vector< ll > vec;

          for(int i=1;i<=n;i++){
              ll a;
              cin>>a;
              vec.push_back(a);
          }

          sort(vec.begin(),vec.end(), greater<ll>());
          ll arr[5000];
          ll min=1000000000;

          for(int i=0;i<n-1;i++){
              int j=i+1;
              if(vec[i]-vec[j]<=min)
                min=vec[i]-vec[j];

          }

          cout<<min<<endl;
        }
}
