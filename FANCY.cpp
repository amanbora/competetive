#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int t;
    cin>>t;
    cin.ignore();





    while(t--){

        getline(cin,s);
        // cout<<s;

        // cin>>s;

        int flag=0;

        if(s[0]=='n'){
            if(s[1]=='o' && s[2]=='t' && (s[3]==' ' || s[3]=='\0')){
                flag=1;

            }
        }

        else {

              for(int i=1;i<s.length();i++){
                  if((s[i-1]==' ') && (s[i]=='n' && s[i+1]=='o' && s[i+2]=='t') && (s[i+3]=='\0' || s[i+3]==' ' ) )
                    flag=1;
              }
        }

        if(flag)cout<<"Real Fancy";
        else cout<<"regularly fancy";

        cout<<endl;
    }
}
