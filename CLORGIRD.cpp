#include<iostream>
#include<string>

using namespace std;

int main(){

    int r;
    cin>>r;

    while(r--){

        int count1=0,count0=0;
        int n,m;
        cin>>n>>m;

        int flag1=0,flag2=0;

        if(n==2)flag1=1;
        if(m==2)flag2=1;

        int one=0,zero=0;

        int arr[1000][1000];

        for(int i=0;i<n;i++){
                string c;
                cin>>c;

          for(int j=0;j<c.length();j++){
                if(c[j]=='#')
              {
                arr[i][j]=1;
                one=1;

              }
              else
              {
                arr[i][j]=0;
                count0++;
                zero=1;
              }
            }
        }

       int f=0;

        if(flag1==1){

                for(int i=0;i<n;i++){

                    for(int j=0;j<m;j++){

                        if(arr[0][j]==1){
                            if(arr[1][j]==0)
                              { f=1;
                                 break;
                               }
                        }
                        if(arr[1][j]==1){
                            if(arr[0][j]==0)
                              { f=1;
                                 break;
                               }
                        }



                    }
                    if(f)break;
                }

        }

        if(flag2==1){

                for(int i=0;i<n;i++){

                    for(int j=0;j<m;j++){

                        if(arr[i][0]==1){
                            if(arr[i][1]==0)
                              { f=1;
                                 break;
                               }
                        }
                        if(arr[i][1]==1){
                            if(arr[i][0]==0)
                              { f=1;
                                 break;
                               }
                        }



                    }
                    if(f)break;
                }

        }


                // for(int i=0;i<n;i++){
                //
                //     for(int j=0;j<1;j++){
                //
                //         if(arr[i][j]==1){
                //             if(i>=2 && (n-i)>2){
                //
                //             }
                //         }
                //     }
                // }


                for(int j=1;j<m-1;j++){
                    if(arr[1][j]==1){
                        if(arr[0][j]==0)
                          {
                            f=1;
                            break;
                          }
                    }
                }

                for(int j=0;j<m;j+=2){
                    if(arr[0][j]==1 &&  arr[0][j+2]==1){
                        if(arr[0][j+1]==0)
                          {
                            f=1;
                            break;
                          }
                    }
                }



                for(int j=1;j<m-1;j++){
                    if(arr[n-2][j]==1){
                        if(arr[n-1][j]==0)
                          {
                            f=1;
                            break;
                          }
                    }
                }

                for(int j=0;j<m;j+=2){
                    if(arr[n-1][j]==1 &&  arr[n-1][j+2]==1){
                        if(arr[n-1][j+1]==0)
                          {
                            f=1;
                            break;
                          }
                    }
                }



                for(int j=1;j<n-1;j++){
                    if(arr[j][1]==1){
                        if(arr[j][0]==0)
                          {
                            f=1;
                            break;
                          }
                    }
                }
                for(int j=0;j<n;j+=2){
                    if(arr[0][j]==1 &&  arr[0][j+2]==1){
                        if(arr[0][j+1]==0)
                          {
                            f=1;
                            break;
                          }
                    }
                }


                for(int j=1;j<n-1;j++){
                    if(arr[j][m-2]==1){
                        if(arr[j][m-1]==0)
                          {
                            f=1;
                            break;
                          }
                    }
                }
                for(int j=0;j<n;j+=2){
                    if(arr[m-1][j]==1 &&  arr[m-1][j+2]==1){
                        if(arr[m-1][j+1]==0)
                          {
                            f=1;
                            break;
                          }
                    }
                }


                if(arr[0][0]==0){
                    if(arr[1][0]==1 || arr[0][1]==1)
                      f=1;
                }



                      if(arr[0][m-1]==0){
                          if(arr[0][m-2]==1 || arr[1][m-1]==1)
                            f=1;
                      }



                      if(arr[n-1][0]==0){
                          if(arr[n-2][0]==1 || arr[n-1][1]==1)
                            f=1;
                      }

                    if(arr[n-1][m-1]==0){
                        if(arr[n-2][m-1]==1 || arr[n-1][m-2]==1)
                          f=1;
                    }


              if(one==0||zero==0)
                f=0;

              if(count0<4)f=1;

               if(f==1)cout<<"NO";
                else cout<<"YES";
                cout<<endl;

    }
}
