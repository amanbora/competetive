#include<iostream>
#include<algorithm>

typedef long long int ll;

using namespace std;




int main(){


    int t;
    cin>>t;
    while(t--){

        ll Ndrag,Power;
        cin>>Ndrag>>Power;

         ll dragStr[100010];

         ll num[100010]={0};

        for(ll i=0;i<Ndrag;i++)
           cin>>dragStr[i];

         sort(dragStr, dragStr+Ndrag, greater<ll>());

        ll last=Ndrag-1, val=1,k,ind,m=0;

        int flag=0;

        if(Ndrag%2==0)k=1;
        else {k=2;m=1;}


        for(ll i=0;i<Ndrag/2+m;i++){

             ll temp=Power-dragStr[0];

             if(temp<=0)
                num[val]++;

              for(ll j=1;j<=last;j++){
                    if(dragStr[j]>=temp)
                    {   num[val]=num[val]+last-j+1;
                      break;

                    }
                    else
                       temp=temp-dragStr[j];

              }


              temp=Power-dragStr[0];

              for(ll j=last+1; j<Ndrag; j++){
                    if(dragStr[j]>=temp)
                    {   num[val]=num[val]+Ndrag-j;
                        break;

                    }
                    else
                       temp=temp-dragStr[j];
              }

              val++;
              last--;
              ind=val;
          }
          ind=ind-k;

          //cout<<ind<<"  "<<val<<"  ";
          for(ll i=Ndrag/2+m;i<Ndrag;i++){
              num[val]=num[ind];
              val++;
              ind--;
          }

          for(ll i=1;i<=Ndrag;i++)
             cout<<num[i]<<" ";
          cout<<"\n";
    }
  }
