#include<iostream>

using namespace std;


int main(){
  long n,q;
  cin>>n>>q;

  long arr[1005][3];
  for(long i=0;i<q;i++){
    for(long j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }

// long ttt[100000][6],ppp[100000]={0};
long ttt[1005][1005],ppp[1005]={0};


  for(int i=0;i<q;i++){

    if(arr[i][0]==0){
      ttt[arr[i][1]][ppp[arr[i][1]]++]=arr[i][2];
      ttt[arr[i][2]][ppp[arr[i][2]]++]=arr[i][1];
    }
    else if(arr[i][0]==1){
      int flag=0;
      for(int j=0;j<=n;j++){
        for(int k=0;k<=n;k++){
          if(ttt[arr[i][1]][j] == arr[i][2] || ttt[arr[i][1]][j] == ttt[arr[i][2]][k])
            {  if(ttt[arr[i][2]][k]!=0){
               cout<<"YES"<<"\n";
                flag=1;
              }
            }
          if(flag==1)break;
        }
       if(flag==1)break;
      }
      if(flag==0)
        cout<<"NO"<<"\n";
    }
  }
}
