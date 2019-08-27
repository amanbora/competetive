#include<iostream>
#include<vector>
#include <utility>
#include<algorithm>


using namespace std;
typedef long long int ll;
int main(){
    ll n,l,a;
    cin>>n>>l>>a;
    ll sumt=0,suml=0,ans;
    //vector<pair<int,int>p1> v;
    ll arr[100000][2];

    pair<ll, ll> arr[100000];


    for(int i=0;i<n;i++){
        cin>>arr[i].first<<arr[i].second;
        suml=suml+arr[i].second;
        sumt=sumt+arr[i][.first;
        //v.push_back(t1)
    }

    if(l==suml)ans=0;


    else{
        sort(arr,arr+n);

        ll minLeft=arr[0].first;


        for(int i=1;i<n;i++){
            minLeft=minLeft + arr[i].first-(arr[i-1].first+arr[i-1].second);

        }
        ans=minLeft/a;


    }
    cout<<a;
}
