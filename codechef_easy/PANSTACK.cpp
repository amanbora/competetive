#include<iostream>
typedef long long int ll;
#define modulo 1000000007;
using namespace std;
int main(){
  ll ans[1005]={0};
  ll add[1005]={0};
  add[0]=0;
	add[1]=1;
	ans[1]=1;

  for(int i=2;i<1001;i++){
      for(int j=i-1;j>=2;j--){
          add[j]=add[j-1]+add[j]*j;
          add[j]%=modulo;
      }
      add[i]=1;
      for(int k=1;k<=i;k++){
          ans[i]+=add[k];
          ans[i]%=modulo;
      }
  }

  int t;
  cin>>t;


  while(t--){
      int n;
      cin>>n;
      cout<<ans[n]<<endl;
  }
}
