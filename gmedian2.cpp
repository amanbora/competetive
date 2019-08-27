
/*  C++ code to generate all possible subsequences.
    Time Complexity O(n * 2^n) */
#include<iostream>
#include <math.h>
#include<vector>
#define modulo 1000000007

typedef long long int ll ;
typedef unsigned long long int ull ;

using namespace std;

ll printSubsequences(vector<int> arr , int n)
{
    vector<ll> vec;
    /* Number of subsequences is (2**n -1)*/
    ull opsize = pow(2, n);

    ll tot=0;

    /* Run from counter 000..1 to 111..1*/
    for (int counter = 1; counter < opsize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            /* Check if jth bit in the counter is set
                If set then print jth element from arr[] */
            if (counter & (1<<j))
                // cout << arr[j] << " ";
                 vec.push_back(arr[j]);
        }

        // if(vec.size()%2==0 )
        //     tot++;
        if(vec.size()%2==0){

            if(vec.size()==2){
                if(vec[0]!=vec[1])
                    tot++;
            }

            else if(vec[(vec.size()/2)]!=vec[((vec.size()-1)/2)])
                tot++;

        }
        vec.clear();

        tot%=modulo;

        // cout << endl;
    }
    // cout<<tot%modulo;
    // cout<<endl;
    return tot+1;
}

// Driver program
int main()
{
  ull x=(ll)pow(2,1000)%modulo;
  cout<<x<<endl;
  int t;
  cin>>t;
  while(t--){

      int n;
      cin>>n;

      vector <int> arr;

      int rep[1000];



      for(int i=0;i<n;i++){
          int a;
          cin>>a;
          arr.push_back(a);
          rep[a]++;

      }
      sort(arr.begin(),arr.end());

      ll rem=printSubsequences(arr,n);

      ll ans=((ll)pow(2.0,n)%modulo -rem)%modulo;

      cout<<ans<<endl;


    }

}
