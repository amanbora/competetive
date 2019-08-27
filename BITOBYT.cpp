#include<iostream>
#include<math.h>
using namespace std;
int main(){

    long t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;

        long long bit=0,nib=0,byt=0;


        if(n<=2)bit=1;

        else if(n<=10) nib=1;

        else if(n<=26)byt=1;

        else{

                if((n-1)%26==0)
                    bit=pow(2,(n-1)/26);

                else if((n-3)%26==0)
                    nib=pow(2,(n-3)/26);

                else if((n-11)%26==0)
                    byt=pow(2,(n-11)/26);

                else{ n=n-1;
                    if(n%26<3)  bit=pow(2,(n/26));
                    else if(n%26<11) nib=pow(2,(n/26));
                    else byt=pow(2,n/26);
                }

          }

        cout<<bit<<" "<<nib<<" "<<byt;
        cout<<endl;
    }
}
