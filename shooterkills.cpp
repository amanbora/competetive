#include<iostream>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Returns LCM of array elements
ll findlcm(int arr[], int n)
{
    // Initialize result
    ll ans = arr[0];

    // ans contains LCM of arr[0], ..arr[i]
    // after i'th iteration,
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));

    return ans;
}




int main(){
  int t;
  cin>>t;
  while(t--){

      int n;
      cin>>n;
     int arr[20];
     for(int i=0;i<n;i++){
       cin>>arr[i];
     }
     ll lcm=findlcm(arr, n);
     cout<<lcm<<"\n";
  }

}
