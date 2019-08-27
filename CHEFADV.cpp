#include<iostream>
using namespace std;
typedef long long int ll;


int main(){

    int t;
    cin>>t;
    while(t--){
      ll n,m,x,y;
      cin>>n>>m>>x>>y;


      n=n-1; m=m-1;
      int ans=0;

    if(x==1 && y==1)ans=1;

    else if(n>=x && m>=y)  {

        if(x==1 && m%y==0)ans=1;

        else if(x==1 && m%y==1 && x!=n)ans=1;

        else if(y==1 && n%x==0)ans=1;

        else if(y==1 && n%x==1 && y!=m)ans=1;

        else if(n%x==0 && m%y==0)ans=1;

        else if(n%x==1 && m%y==1)ans=1;


      }

    else if(n==0 && m==0)
          ans=1;

    else if(n==1 && m==1)
        ans=1;


    else if(m<y){
        if(n%x==0 && m==0)ans=1;
        else if(n%x==1 && m==1)ans=1;

    }

    else if(n<x){
        if(m%y==0 && n==0)ans=1;
        else if(m%y==1 && n==1)ans=1;

    }
    else if(n==0 && m==1 && y==1)ans=1;

    else if(m==0 && n==1 && x==1)ans=1;



    if(ans==1)cout<<"Chefirnemo";
    else cout<<"Pofik";
    cout<<endl;
    }
}
