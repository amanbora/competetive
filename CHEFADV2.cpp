#include<iostream>
using namespace std;
typedef long long int ll;


int main(){

    int t;
    cin>>t;

    while(t--){

        ll n,m,x,y;

        cin>>n>>m>>x>>y;
        n=n-1;
        m=m-1;



        int ans=0;


        if(n==1 && m==1)ans=1;


        else if(n==0 && m==0)ans=1;


        else if(m==0 && n%x==0)ans=1;

        else if(n==0 && m%y==0)ans=1;

        else if(m==1 && x==1 && n!=0)ans=1;

        else if(n==1 && y==1 && m!=0)ans=1;


        else if(n>=x && m>=y){

            n=n%x;
            m=m%y;
            //cout<<n<<m<<endl;

            if(n==1 && m==1)ans=1;

            else if(n==0 && m==0)ans=1;

            else if(n==0 && m==1 && x==1)ans=1;

            else if(m==0 && n==1 && y==1)ans=1;

        }

        else if(m==1 && n%x==1)ans=1;

        else if(n==1 && m%y==1)ans=1;
        //else if(m==1 && (n%x==1 || x==1) && n!=0)ans=1;

        //else if(n==1 && ( m%y==1 || y==1) && m!=0)ans=1;


    //    else if(n==0 && y==1)ans=1;

    //    else if (m==0 && x==1)ans=1;



        if(ans==1)cout<<"Chefirnemo";
        else cout<<"Pofik";
        cout<<endl;
    }


}
