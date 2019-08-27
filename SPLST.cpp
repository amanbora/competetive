#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){


    long a,b,c,x,y;

    cin>>a>>b>>c>>x>>y;

    if((a+b+c)==(x+y)){

         long gr=x>y?x:y;

         long gr2=a>b?a:b;
         gr2=gr2>c?gr2:c;

        if(gr>gr2+a || gr>gr2+b || gr>gr2+c)
                 cout<<"NO"<<"\n";


        else
           cout<<"Yes"<<"\n";

    }
    else
     cout<<"NO"<<"\n";
  }
}
