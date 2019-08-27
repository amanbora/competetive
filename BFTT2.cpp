#include<iostream>
#include<cmath>
typedef long long int ll;
using namespace std;
int main(){

  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    int flag=0;
    ll count=0,dig=0;
    ll ans=0;
    static char num[2000000000];
    ll temp=n;
    while(n>0){
      int d=n%10;
      num[dig++]=d;
      if(d==3)count++;
      n=n/10;
    }


   if(dig==count && count>=3)
        ans = pow(10,count)+temp;


    else if(dig<3 || (dig==3 && count<3 && temp<333))
        ans=333;

    else if(dig==3 && count<3 && temp>333)
        ans=1333;

    else if(dig>3 && count<3){
        for(ll i=0; count<3 ;i++){
          if((int)num[i]<3){num[i]=3;count++;}
        }
        for(ll i=dig;i>=0;i--){
          ans=ans*10+(int)num[i];
      }
    }

    else if(dig>3 && count>=3){
        for(ll i=dig; i>=dig  ;i--){
          if((int)num[i]<3){num[i]=3;flag=1;break;}
         }

        if(flag==0){
          for(ll i=dig;i>=0;i--){
            ans=ans*10+(int)num[i];
          }
         ans=ans+pow(10,dig+1);
        }
       else{
            for(ll i=dig;i>=0;i--){
              ans=ans*10+(int)num[i];
          }
        }
      }

    cout<<ans;
    cout<<"\n";

    }
    return 0;
  }
