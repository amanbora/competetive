#include<iostream>
#include<cmath>

using namespace std;


int main(){
    int n,l,r;
    cin>>n>>l>>r;

    int min=0,max=0,i=1,j=2;

    int n1=l, n2=r;
    n1--;
    n2--;
    while(n1--){
        min += j;
        j*=2;
    }
    while(n2--){
        max+=i;
        i*=2;
    }
    min += n-l+1;
    max += i*(n-r+1);

    cout<<min<<" ";
    cout<<max;

}
