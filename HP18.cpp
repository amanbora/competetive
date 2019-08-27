#include<iostream>
#include<vector>
using namespace std;

int main(){


        int t;
        cin>>t;

        while(t--){
            long n,a,b,flag=0,p,countA=0,countB=0,ans=0;
            vector <long> v;
            vector<long>::iterator it;

            cin>>n>>a>>b;

            for(int i=0;i<n;i++){
                cin>>p;

                if(p%(a*b)==0)
                {
                   flag=1;
                }
                else {
                  v.push_back(p);
                }
            }

            for(it=v.begin();it!=v.end();it++){
                if(*it%b==0){
                    countA++;

                }
            }

            for(it=v.begin();it!=v.end();it++){
                if(*it%a==0){
                    countB++;

                }
            }


            if(flag){
                if(countB==countA)ans=0;
                else if(countB<countA)ans=1;
                else ans=0;
            }

            else{
                if(countB==countA)ans=1;
                else if(countB<countA)ans=1;
                else ans=0;
            }

            if(ans)cout<<"ALICE";
            else cout<<"BOB";
            cout<<endl;

            v.clear();
        }
}
