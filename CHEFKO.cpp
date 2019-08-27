// #include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<utility>
#include<algorithm>
typedef long long int ll;




using namespace std;







int main(){

    int t;
    cin>>t;
    while(t--){

        int n,k;

        cin>>n>>k;



                vector< set<ll> > container;


                       map<ll,ll>frequency;

                       vector<ll>ktime;



        // ss.insert(10);
        // cout<<l<<" "<<r;

        for(int i=0;i<n;i++){
            set<ll>ss;
            ll l,r;
            cin>>l>>r;
            for(ll j=l;j<=r;j++){
                ss.insert(j);
                frequency[j]++;
              //  cout<<j<<"  ";

            }
            container.push_back(ss);

        }

        map<ll,ll>::iterator freq;
        freq=frequency.begin();

        for(freq=frequency.begin();freq!=frequency.end();freq++){

              if(freq->second>=k){

                  ktime.push_back(freq->first);

              }

        }


        vector<ll>::iterator itr;
        itr=ktime.begin();


        // for(itr=ktime.begin();itr!=ktime.end();itr++){
        //     cout<<*itr<<"  ";

        // }
        // cout<<endl;



        ll high=0,count=0;

        for(int i=0;i<n;i++){

            count=0;


            //vector<ll>con=container[i];


            for(itr=ktime.begin();itr!=ktime.end();itr++){
                  cout<<*itr<<"  ";
                  if(container[i].find(*itr)!=container[i].end())
                      count++;
            }
            if(count>high)
                high=count;
        }
        cout<<endl;


         cout<<high<<endl;










    }
}
