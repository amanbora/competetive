#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,arr[100005], k;
        cin>>n>>k;

        for(int i=0;i<n;i++)cin>>arr[i];


        if(k==2){
            int flag=0;
            for(int i=0;i<n;i+=2){
                if(arr[i]==1 || arr[i]==-1);
                else {  flag=-1; break;}
            }
            if(flag==-1){
                flag=1;
                for(int i=0;i<n;i+=2){
                    if(arr[i]==2 || arr[i]==-1);
                    else {  flag=-1; break;}
                }
            }

            if(flag==0){
              for(int i=1;i<n;i+=2){
                  if(arr[i]==-1);
                  else {  flag=-1; break;}
              }
              if(flag==-1){
                flag=2;
                for(int i=1;i<n;i+=2){
                    if(arr[i]==2);
                    else {  flag=-1; break;}
                }
              }
              if(flag==-1){
                flag=3;
                for(int i=1;i<n;i+=2){
                    if(arr[i]==1);
                    else {  flag=-1; break;}
                }
              }


            }
            if(flag==1){
              for(int i=1;i<n;i+=2){
                  if(arr[i]==1 || arr[i]==-1);
                  else {  flag=-1; break;}
              }
            }

            if(flag==-1)cout<<"NO";
            else{
                cout<<"YES"<<endl;
                if(flag==0){
                    for(int i=0;i<n;i+=2){
                      if(arr[i]==-1)arr[i]=1;
                    }

                    for(int i=1;i<n;i+=2){
                      if(arr[i]==-1)arr[i]=2;
                    }
                }
                if(flag==1){
                    for(int i=0;i<n;i+=2){
                      if(arr[i]==-1)arr[i]=2;
                    }

                    for(int i=1;i<n;i+=2){
                      if(arr[i]==-1)arr[i]=1;
                    }
                }
                if(flag==3){
                  for(int i=0;i<n;i+=2){
                    if(arr[i]==-1)arr[i]=2;
                  }

                  for(int i=1;i<n;i+=2){
                    if(arr[i]==-1)arr[i]=1;
                  }
                }
                if(flag==2){
                  for(int i=0;i<n;i+=2){
                    if(arr[i]==-1)arr[i]=1;
                  }

                  for(int i=1;i<n;i+=2){
                    if(arr[i]==-1)arr[i]=2;
                  }
                }
                for(int i=0;i<n;i++)cout<<arr[i]<<" ";
            }
            cout<<endl;
        }




        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(i==0 && arr[i]==-1){
                    arr[i]=1;
                    if(arr[1]==1)arr[i]=2;
                }
                else if(arr[i]==-1){
                    if(arr[i-1]!=1 && arr[i+1]!=1)arr[i]=1;
                    else {
                      arr[i]=2;
                      if(arr[i]==arr[i-1] || arr[i]==arr[i+1])arr[i]=3;
                    }
                }
                else if(i==n-1 && arr[i]==-1){
                    arr[n-1]=1;
                    if(arr[n-1]==arr[n-2])arr[n-1]=2;
                }

            }

            for(int i=0;i<n;i++)cout<<arr[i]<<" ";
            cout<<endl;

        }
    }
}
