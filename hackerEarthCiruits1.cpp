#include<iostream>
using namespace std;

int main(){

    long t;

    while(t--){

    long arr[5];
    for(int i=0;i<5;i++)
      cin>>arr[i];



      long count=1;
      while(arr[0]<=arr[4]){


        if(count==arr[2])
          arr[0]=arr[0]+arr[4];
        else
          arr[0]=arr[0]+arr[1];
        count++;

      }
      cout<<count<<"\n";
    }
}
