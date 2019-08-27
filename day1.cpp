#include<iostream>
#include<algorithm>
using namespace std;

int main(){

      int t;
      cin>>t;
      while(t--){

            int arr[3],k;

            cin>>k;
            for(int i=0;i<3;i++)
              cin>>arr[i];

            sort(arr,arr+3);


            int c1=arr[0]+arr[1]+arr[2];

            int c2=arr[2]+arr[1]-arr[0];
            int c3=arr[1]+arr[0]-arr[2];
            int c4=arr[2]+arr[0]-arr[1];

            int c5=arr[2]-arr[0]-arr[1];

            if(c1==k || c2==k|| c3==k|| c4==k|| c5==k)
              cout<<"WIN";
            else
              cout<<"LOSE";

            cout<<endl;


      }
}
