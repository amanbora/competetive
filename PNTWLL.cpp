#include<iostream>
#include<vector>
#include<set>

using namespace std;

typedef long long int ll;


int main(){

    int t;
    cin>>t;

    while(t--){

        int n,m;
        cin>>n>>m;


        vector<ll>height;
        vector<int>colorVec;

        set<int>colorGet;

        set<ll>hs;


        for(int i=0;i<n;i++){

          ll h;
          cin>>h;
          height.push_back(h);
        }

        for(int i=0;i<m;i++){

          int h;
          cin>>h;
          colorVec.push_back(h);
        }

        vector<ll> :: iterator itr;

        vector<int> :: iterator itrC;
        itrC=colorVec.begin();

        int col=m;
        for( itr=height.begin();itr!=height.end()-1;itr++){
            if(*itr<*(itr+1)  && colorGet.find(*(itrC+1))==colorGet.end() && hs.find(*(itr+1))==hs.end())
                {
                    hs.insert(*(itr+1));
                     hs.erase(*(itr+1));
                    colorGet.insert(*(itrC+1));
                     colorGet.erase(*itrC);
                }
            else if(*itr>*(itr+1)  && colorGet.find(*itrC)==colorGet.end() && hs.find(*itr+1)==hs.end())
                {
                  hs.insert(*itr);
                  hs.insert(*(itr+1));
                  colorGet.insert(*(itrC+1));
                   colorGet.insert(*itrC);
                }
            else if(*itr==*(itr+1))
            {
                hs.insert(*itr);
                colorGet.insert(*(itrC+1));
                cout<<*itrC<<endl;
            }
            *itrC++;

        }

        cout<<colorGet.size()<<endl;

    }

}
