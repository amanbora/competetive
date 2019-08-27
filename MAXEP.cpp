#include<iostream>
#include<cstring>

using namespace std;


  int arr[150005];



void find(int low,int high,int coin,int c){
        //
        // cout<<low<<"  "<<high<<endl;
        //
        // cout<<arr[high-1]<<endl;


        while(coin>=0){

              if(arr[high-1]==0){
                    // cout<<2<<flush<<endl;
                    cout<<3<<" "<<high<<flush<<endl;
                    return;

              }

              // cout<<2<<flush<<endl;

              coin-=c;


              while(low<=high){
                  int f;


                  if(arr[low+1]==1){
                    cout<<3<<" "<<(low+1)<<flush<<endl;
                    return;
                  }


                  cout<<1<<" "<<low<<flush<<endl;

                  coin++;

                  cin>>f;



                  if(f){
                      cout<<2<<flush<<endl;
                      cout<<3<<" "<<low<<flush<<endl;
                      return;

                  }
                  else{
                    if(arr[low+1]==1){
                      cout<<3<<" "<<(low+1)<<flush<<endl;
                      return;
                    }
                     arr[low]=0;
                     low++;


                  }

              }

        }
}

int main(){

      int n,c;
      cin>>n>>c;

      int coin=1000;

      int f,high,low=1,flag=1;

      int x=1;

      memset(arr,-1,sizeof(arr));


      if(n==1){

        cout<<1<<" "<<1<<flush<<endl;
        cin>>f;
        cout<<2<<flush<<endl;
        cout<<3<<" "<<1<<flush<<endl;
        flag=0;

      }




      while(coin>=0 && flag){

            cout<<1<<" "<<x<<flush<<endl;

            coin--;

            cin>>f;

            if(f){

                  high=x;

                  arr[x]=1;

                  cout<<2<<flush<<endl;

                  if(arr[1]==1)
                      cout<<3<<" "<<1<<flush<<endl;

                  else
                    find(low,high,coin,c);

                  break;


            }

            else{


                  low=x+1;

                  arr[x]=0;


                  if((n-x)>=382){
                      x+=382;
                  }

                  // else if((n-x)>=300)
                  //     x+=299;
                  // else if((n-x)>=150)
                  //     x+=149;

                  if((n-x)>=19)
                      x+=19;

                  if((n-x)>=4)
                      x+=4;



                  x++;

            }

      }
}
