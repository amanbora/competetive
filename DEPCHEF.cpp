#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

// #define MP make_pair ;
// #define push_back PB;
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int att[105];
        int def[105];


        for(int i=0;i<n;i++){
            cin>>att[i];
        }

        for(int i=0;i<n;i++){
            cin>>def[i];
        }



        vector< pair< long , long> > vec;
        for(int i=1;i<n-1;i++)
        {
            long x =def[i]-att[i-1]-att[i+1];
            vec.push_back( make_pair(x,i) );
        }
        vec.push_back(make_pair(def[n-1]-att[n-2]-att[0],n-1));
        vec.push_back(make_pair(def[0]-att[n-1]-att[1],0));

        sort(vec.begin(),vec.end());

        // for(int i=0;i<n ;i++ ){
        //     cout<<vec[i].first<<"  "<<vec[i].second<<endl;
        // }

        if(vec[n-1].first<=0) cout<<-1;
        else {

          long great=vec[n-1].first;
          int defGr=def[vec[n-1].second];
          for(int i=0;i<n;i++){
              if(vec[i].first>0){
                  if(def[vec[i].second]>defGr)
                      defGr=def[vec[i].second];
              }
          }
          cout<<defGr;
        }
        vec.clear();

        cout<<endl;
    }
}
