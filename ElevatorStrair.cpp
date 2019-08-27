#include<iostream>
#include<math.h>


using namespace std;

int main(){

    int x,y,z,t1,t2,t3;

    cin>>x>>y>>z>>t1>>t2>>t3;

    int stair=abs(x-y)*t1;
    int elevator= 3*t3 + abs(x-z)*t2 +abs(x-y)*t2;

    if(stair<elevator)
      cout<<"NO";
    else cout<<"YES";
}
