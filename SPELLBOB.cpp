#include<iostream>

using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int co=0,bo=0,flag=0;
    char top[3],bot[3];
    for(int i=0;i<3;i++)
      cin>>top[i];

    for(int i=0;i<3;i++)
      cin>>bot[i];

    for(int i=0;i<3;i++){

      if(top[i]!='o' && top[i]!='b' && bot[i]!='b' && bot[i]!='o')
          flag=1;
      else
      {
          if(top[i]=='o' || bot[i]=='o')
             co++;

          if(bot[i]=='b' || top[i]=='b')
             bo++;
       }
    }
    if(flag==1)
      cout<<"no";

    else{
          if(co>=1 && bo>=2)
            cout<<"yes";
          else
            cout<<"no";
        }
    cout<<"\n";
  }
}
