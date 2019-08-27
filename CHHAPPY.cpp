#include<iostream>
#include<set>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int arr[100000];

      //  vector<pair<int,int> > vect;
        set<int>ss;
        set<int>rep;

        for(int i=0;i<n;i++){

            cin>>arr[i];
            if(ss.find(arr[i])!=ss.end())
              rep.insert(arr[i]);
            else
              ss.insert(arr[i]);


        }

        int ans=0;

        if(rep.size()==0)
          ans=0;

        else{
              set<int>::iterator itr;
              itr=rep.begin();



              for(itr=rep.begin();itr!=rep.end();itr++){
                    int c=0;
                    for(int i=0;i<n;i++){
                        if(arr[i]==*itr){
                            if(ss.find(i+1)!=ss.end())
                              c++;
                        }
                    }
                    if(c>=2){
                      ans=1;
                      break;
                    }

              }
            }

        if(ans==1)cout<<"Truly Happy";
        else cout<<"Poor Chef";
        cout<<endl;

    }
}
