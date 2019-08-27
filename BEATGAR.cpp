#include<iostream>
#include<string>
#include<set>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        int count=0,ans;
        set<char>ch;
        int n=s.length();
        for(int i=0;i<s.length()-1;i++){

            if(s[i]==s[i+1])
              {
                count++;
                ch.insert(s[i]);
              }
        }
        cout<<count<<"  "<<ch.size();


        if(s[0]==s[s.length()-1] && count==0)
            ans=1;

        else if(s[0]==s[s.length()-1])
          {
             count++;
             ch.insert(s[0]);
          }


        if((n==2 || n==3) && count>=s.length()/2)cout<<"no";
        else if(count>2)cout<<"no";
        else if(ans)cout<<"no";

        else if(ch.size()==2 && count==2)cout<<"yes";
        else if(count==0)cout<<"yes";

        else cout<<"no";
        cout<<endl;
    }
}
