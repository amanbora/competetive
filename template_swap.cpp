#include<iostream>
using namespace std;

template <class X> void swap(X &a, X &b){

    X temp;
    temp=&a;
    &a=&b;
    &b=temp;
    cout<<a<<"  "<<b<<endl;

}


int main(){

    int a =10,b=20;

    float c=10.5, d=20.5;
    swap(a,b);
    swap(c,d);
    return 0;
}
