#include<iostream>
#include<string.h>
using namespace std;
int main(){

  int t;
  cin>>t;
  while(t--){
     int d,n;
     cin>>d>>n;
     char str[30],ans[30];
     cin>>str;
     int k=0;
     for(char j='a';j<'a'+d;j++){
         int flag=0;
         for(int i=0;i<strlen(str);i++){
              if(j==str[i])
              {  flag=1;
                 break;
               }
            }
         if(flag==0)
            ans[k++]=j;


     }
     for(int i=0;i<n-1;i++){
       cout<<ans;
     }
     cout<<"\n";
  }
}
