#include<iostream>
#include<algorithm>
typedef long long int ll;
using namespace std;


void add(ll arr[], ll N, ll lo, ll hi, int val)
{
    arr[lo] += val;
    if (hi != N)
       arr[hi + 1] -= val;
}
void updateArray(ll arr[], ll N)
{
    for (ll i = 2; i <= N; i++)
        arr[i] += arr[i - 1];
}


int main(){
    int t;
    cin>>t;
    while(t--){
      ll n;
      ll c[100005] = {0};
      ll com[100005] = {0};
      ll h[100005] = {0};

      cin>>n;
      for(int i=1;i<=n;i++){
          cin>>c[i];
      }

      for(int i=1;i<=n;i++){
        cin>>h[i];
      }

      for(ll i=1; i<=n; i++ ){
          ll p1 = i-c[i];
          ll p2 = i+c[i];
          if(p1>0 && p2>n){
              p2=n;
          }
          else if(p1<=0 && p2<=n){
              p1=1;
          }
          else if(p1<=0 && p2>n){
            p1=1;
            p2=n;
          }


          add(com,n,p1,p2,1);

      }
      updateArray(com, n);

      sort(h+1,h+n+1);
      sort(com+1, com+n+1);

      int flag=0;
      for(ll i=1;i<=n;i++){

          if(h[i]!=com[i])
          {
            flag=1;
            break;
          }
      }

          if(flag)cout<<"NO";
          else cout<<"YES";
          cout<<endl;


    }
  }
