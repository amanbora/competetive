#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    long long int arr[1000000];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int index=-1;

    for(int i=0;i<n;i++){

        if(arr[i]>i)
          {  index=i+1;
            break;
          }

    }


    cout<<index;
}
