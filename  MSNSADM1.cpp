#include<iostream>
#include<algorithm>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
          int n;
          cin>>n;
          int a[155]={0}, b[155]={0};
          for(int i=0;i<n;i++){
              cin>>a[i];
              a[i]*=20;
          }
          for(int i=0;i<n;i++){
              cin>>b[i];
              b[i]*=-10;
          }
          for(int i=0;i<n;i++){
              a[i]+=b[i];
          }
          sort(a,a+n);
          if(a[n-1]>0)
            cout<<a[n-1]<<endl;
          else  cout<<0<<endl;

      }
}
