#include<iostream>
#include<math.h>
using namespace std;




int func(int n){

    if(n==1 || n==2)
      return 1;



    int ans=func(n-1)+2*func(n-2);

    return ans;

}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int x=func(n);
        int y=(int)pow(2.0,n);
       cout<<x<<" "<<y<<" ";
       
     }
}
