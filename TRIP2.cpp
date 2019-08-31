#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[100005],n,k,flag1=0,flag2=0,count=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }

         if(k==2){
            int flag=0;
            for(int i=0;i<n;i++){
                if(arr[i]==-1){
                    if(i>0){
                        if(arr[i-1]==1){
                           if(i<n-1){
                              if(arr[i+1]==2){
                                flag=1;
                              }
                              else
                                arr[i]=2;
                           }
                           else
                              arr[i]=2;
                        }
                        else if(arr[i-1]==2){
                             if(i<n-1){
                               if(arr[i+1]==1){
                                 flag=1;
                               }
                               else
                                 arr[i]=1;
                            }
                            else
                               arr[i]=1;
                         }


                    }
                    else if(i==0){
                        if(arr[1]==1)arr[0]=2;
                        else arr[0]=1;
                    }

                }
                if(flag)break;
            }
            if(flag)cout<<"NO";
            else{
                cout<<"YES"<<endl;
                for(int i=0;i<n;i++)
                    cout<<arr[i]<<" ";
            }

        }


          cout<<endl;
    }
}
