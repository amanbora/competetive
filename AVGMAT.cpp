#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n,m;

        cin>>n>>m;

         int dist[400]={0};

        vector<pair<int,int>> vec;

        for(int i=1;i<n+1;i++){
              //cout<<"enter";
              string a;
              cin>>a;
             //cout<<a<<endl;
              for(int k=0;k<a.length();k++){

                 if(a[k]=='1')
                   vec.push_back(make_pair(i,k+1)) ;
                //   cout<<vec.size()<<endl;
              }


          }




          for(int j=0;j<vec.size()-1;j++){
              for(int k=j+1;k<vec.size();k++){
                  int dis=abs(vec[k].first-vec[j].first)+abs(vec[k].second-vec[j].second);;
                  dist[dis]++;
              }
            }


        for(int j=1;j<=n+m-2;j++)
            cout<<dist[j]<<" ";
        cout<<endl;


    }
}
