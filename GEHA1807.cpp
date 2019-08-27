#include<iostream>
#include<string>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        int x;
        char ch;
        cin>>n>>x>>ch;
        string arr[100];
        for(int i=0;i<n;i++)
        {
          getline(cin,arr[i]);

        }
        int count=0;

        for(int i=x;i<n;i++)
        {
          if(arr[i][4]==ch || arr[i][8]==ch)
              count++;
        }

        cout<<count<<endl;


    }
}
