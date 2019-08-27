#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int ans=0;
        int trP,drP;
        cin>>trP;

        set<int>perT;
        set<int>perD;


        for(int i=0;i<trP;i++){
            int a;
            cin>>a;
            perT.insert(a);
        }

        cin>>drP;

        for(int i=0;i<drP;i++){
            int a;
            cin>>a;
            perD.insert(a);
        }

        int trA,drA;

        cin>>trA;


        set<int>askT;
        set<int>askD;

        for(int i=0;i<trA;i++){
            int a;
            cin>>a;
            askT.insert(a);
        }

        cin>>drA;

        for(int i=0;i<drA;i++){
            int a;
            cin>>a;
            askD.insert(a);
        }

        set<int>::iterator itr;

        for(itr=askT.begin();itr!=askT.end();itr++){

            if(perT.find(*itr)!=perT.end());
            else{
                  ans=1;
                  break;
            }
        }

        if(ans==0){
              for(itr=askD.begin();itr!=askD.end();itr++){

                  if(perD.find(*itr)!=perD.end());
                  else
                    {
                      ans=1;
                      break;
                    }
              }

        }

        if(ans)cout<<"no";
        else cout<<"yes";

        cout<<endl;

        askT.clear();

                askD.clear();
                        perT.clear();
                                perD.clear();
    }
}
