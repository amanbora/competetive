#include<iostream>

using namespace std;
int main(){
      string n="";
      cin>>n;

      int siz =0;
      siz = n.length();

      int flag=0;

      int num=0;

      if(siz%2)
        flag=1;

      num = siz/2;



      if(flag==1){
          for(int i=siz;i>0;i--){
              if(n[i]=='1'){
                  num++;
                  break;
               }
          }
      }

      cout<<num;
}
