#include<iostream>
#include<math.h>

using namespace std;


bool isPerfectSquare(long double x)
{
  // Find floating point value of
  // square root of x.
  long double sr = sqrt(x);

  // If square root is an integer
  return ((sr - floor(sr)) == 0);
}




long int SubArraySum(long arr[], int l, int r)
{
    long int result = 0;
    long count=0;

    // Pick starting point
    for (int i=l; i <=r; i++)
    {
        result=arr[i];
        // Pick ending point
        for (int j=i; j<=r; j++)
        {
            // sum subarray between current
            // starting and ending points

            for (int k=i; k<=j; k++)
                result &= arr[k] ;
            if(isPerfectSquare(result))count++;
        }
    }
    return count ;
}




int main(){

    int t;
    cin>>t;
    while(t--){

        int n,q;
        long arr[100];
        cin>>n>>q;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int lim[100][2];

        for(int i=0;i<q;i++){
           cin>>lim[i][0]>>lim[i][1];
           long result=SubArraySum(arr,lim[i][0]-1,lim[i][1]-1);

           cout<<result<<endl;


        }

        cout<<endl;

    }
}
