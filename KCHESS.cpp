#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

typedef long long int ll;



int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<pair<ll, ll> > vect;

        for(int i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            vect.push_back(make_pair(a+2,b+1));
            vect.push_back(make_pair(a-2,b+1));
            vect.push_back(make_pair(a-2,b-1));
            vect.push_back(make_pair(a+2,b-1));

            vect.push_back(make_pair(a+1,b+2));
            vect.push_back(make_pair(a-1,b+2));
            vect.push_back(make_pair(a+1,b-2));
            vect.push_back(make_pair(a-1,b-2));

        }

        ll x,y;
        cin>>x>>y;

        ll arr[9][2];

        arr[0][0]=x;
        arr[0][1]=y+1;


        arr[1][0]=x+1;
        arr[1][1]=y;

        arr[2][0]=x-1;
        arr[2][1]=y;

        arr[3][0]=x;
        arr[3][1]=y-1;

        arr[4][0]=x;
        arr[4][1]=y;

        arr[5][0]=x-1;
        arr[5][1]=y-1;

        arr[6][0]=x+1;
        arr[6][1]=y+1;

        arr[7][0]=x+1;
        arr[7][1]=y-1;

        arr[8][0]=x-1;
        arr[8][1]=y+1;

        int count=0;

        for(int i=0;i<9;i++){

                pair<ll,ll>p;
                p=make_pair(arr[i][0],arr[i][1]);
                if(find(vect.begin(), vect.end(), p) != vect.end())
                  count++;
                else break;

        }
        if(count!=9)cout<<"NO";
        else cout<<"YES";
        cout<<endl;

        vect.clear();
    }
}
