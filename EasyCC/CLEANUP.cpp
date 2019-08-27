#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        vector< int > vec;
        vector< int >ls,chef,ass;
        for(int i=0;i<m;i++){
            int a;
            cin>>a;
            vec.push_back(a);

        }
        sort(vec.begin(),vec.end());
        int k=0;
        for(int i=1;i<=n;i++){
            if(i==vec[k])
              k++;
            else{
               ls.push_back(i);
            }

        }
        vector<int>::iterator itr;
        for(int i=0;i<ls.size();i+=2){
            chef.push_back(ls[i]);
            if(ls[i+1]!=NULL)
              ass.push_back(ls[i+1]);
        }

        for(itr=chef.begin();itr!=chef.end();itr++){
              cout<<*itr<<" ";

        }
        cout<<endl;
        for(itr=ass.begin();itr!=ass.end();itr++){
              cout<<*itr<<" ";

        }
        cout<<endl;
    }
}
