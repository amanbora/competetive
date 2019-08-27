#include<iostream>
#include<string.h>
using namespace std;


int main(){

  int t;
  cin>>t;
  while(t--){

    char ans[55];
    char temp[10];
    int n,m;
    cin>>n>>m;

    int code[55];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           scanf("%c",&temp[i]);
           ans[i]=temp[0];
           cin>>code[i];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<ans[i]<<"\n";
           cout<<code[i];
        }
    }
  }

}
