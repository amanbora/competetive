#include<iostream>
using namespace std;

int main(){

      int t;
      cin>>t;
      while(t--){

          int n,m;
          cin>>n>>m;

          set<int>ss;
          set<int>::iterator itr;


          int arr[1000000];

          for(int i=0;i<m;i++){
              int p;
              cin<<p;
              arr[p]++;
              ss.insert(p);
          }

          for(itr=ss.begin();itr!=ss.end();i++){
              for(int i=0;i<n;i++){
                  
              }
          }


      }
}
