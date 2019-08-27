#include<iostream>
#include<queue>
#define modulo  1000000007

using namespace std;

typedef long long int ll;



// ll nCrModp(int n, int r, ll p)
// {
//     ll C[r+1];
//     memset(C, 0, sizeof(C));
//
//     C[0] = 1;
//
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = min(i, r); j > 0; j--)
//
//             C[j] = (C[j] + C[j-1])%p;
//     }
//     return C[r];
// }

ll fact(int n);

ll nCrModp(int n, int r ,ll p)
{
    return (fact(n) / (fact(r) * fact(n - r)))%p;
}

// Returns factorial of n
ll fact(int n)
{
    ll res = 1;
    for (int i = 2; i <= n; i++)
        res = ( res * i )%modulo;
    return res;
}


ll Nodd(int m){

    ll nodd=0;
    int n=m;
    if(m%2==0)
        n=m-1;

    for(int i=n;i>1;i-=2){

        nodd = ( nodd + nCrModp(m,i,modulo) )%modulo;
    }

    return nodd%modulo;
}





ll Neven(int arr[],int m){

      ll neven=0;
      int n=m;
      if(m%2)
        n=m-1;

      for(int i=n;i>0;i-=2){

          for(int j=0;j<m;j++){

              if(arr[j]>=i/2){

                    neven=( neven+nCrModp(arr[j],i,modulo)) %modulo;

                    for(int p=i-2;p>i/2;p--){

                        neven +=( nCrModp(arr[j],p,modulo) * nCrModp(m-arr[j],i-p,modulo) ) % modulo;
                    }

              }

              else if(arr[j]%2==0 && arr[j]>0){



              }

          }
      }

      return neven%modulo;




}







int main()
{

      int t;
      cin>>t;
      while(t--){

          int n;
          cin>>n;

          priority_queue <int> arr;

          int rep[1000];



          for(int i=0;i<n;i++){
              int a;
              cin>>a;
              arr.push(a);
              rep[a]++;

          }

        //   cout<<Nodd(n)<<"  "<<Neven(rep,n);

          ll result = ( Nodd(n) + n) % modulo;

          cout<<result<<endl;




      }
}
