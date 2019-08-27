#include<iostream>
using namespace std;
int main(){


    int t;
    cin>>t;
    while(t--){

        long n,x,s;
        long box[10000][2] = {0};

        cin>>n>>x>>s;

        //cout<<n<<x<<s<<endl;

        long j=x;

          for(int i=0;i<s;i++){

             long a,b;
             cin>>a>>b;
             //cout<<a<<b<<endl;


             if(a==x)x=b;
             else if(b==x)x=a;

             j=x;

          }

        cout<<j<<endl;
    }
}
