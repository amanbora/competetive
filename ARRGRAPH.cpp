#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){

    int t=0;
    cin>>t;



    while(t--){


      vector<int> prime{ 29,31, 37, 41, 43, 47};
      //cout<< prime[14];

      vector<int>::iterator itr;

      // for(int i=2;i<=50;i++){
      //     prime.push_back(i);
      // }


        int n;
        cin>>n;
        int ans=0;




        int arr[55];
        int f2=0,f3=0,f5=0;

        int GCD;

        for(int i=0;i<n;i++)
        {
           cin>>arr[i];
           if(arr[i]==2)f2=1;
           else if(arr[i]==3)f3=1;
           else if(arr[i]==5)f5=1;
           else GCD=arr[i];

        }




        int index;

        for(int i=0;i<n;i++){
            if(arr[i]!=2 && arr[i]!=3 && arr[i]!=5)
              GCD=gcd(GCD,arr[i]);
            else index=i;

        }



        // for(int i=1;i<n;i++)
        // {
        //     if(gcd(arr[i-1],arr[i])!=1)
        //     {
        //         int flag=0;
        //
        //           for(int j=i+1;j<n;j++){
        //               if(gcd(arr[i-1],arr[j])==1)
        //                 {
        //                   flag=1;
        //                   break;
        //                 }
        //
        //           }
        //
        //
        //         if(flag==0){
        //               for(itr=prime.begin();itr!=prime.end();itr++){
        //               //
        //               //     // if(gcd(arr[i-1],*itr)==1 && gcd(arr[i+1],*itr)==1 )
        //               //     // {
        //               //       arr[i]=*itr;
        //               //       prime.erase(itr);
        //               //       // flag=1;
        //               //     //   break;
        //               //     // }
        //               // }
        //               // // if(flag==0){
        //               // //
        //               // // }
        //                   if(*itr!=arr[i-1] && *itr!=arr[i+1])
        //                     {
        //                       arr[i]=*itr;
        //                       count++;
        //                       break;
        //                     }
        //
        //                 }
        //
        //
        //         }
        //
        //     }


        if(GCD==1){

              ans=0;


          }
          else{
              ans++;
              for(itr=prime.begin();itr!=prime.end();itr++){
                if(gcd(*itr,arr[index]==1)
                    arr[index]=*itr;
              }


          }


        cout<<ans<<endl;
        for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";
        cout<<endl;
    }

}
