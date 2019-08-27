#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int x,y,z;
        cin>>x>>y>>z;

      //  vector <int, greater <int> > ss;
      int arr[3];

      arr[0]=x;
      arr[1]=y;
      arr[2]=z;

      sort(arr,arr+3);

      //cout<<arr[0];


      if(arr[2]==(arr[1]+arr[0]))
            cout<<"yes";
        else cout<<"no";

        cout<<endl;


    }
}
