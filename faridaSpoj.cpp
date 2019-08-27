#include<iostream>

typedef long long int ll;
using namespace std;

ll max(ll a, ll b) { return (a > b)? a : b; }


int K[10000];

ll maximum(int nMon, long coin[], int i){

    ll dp[10000];

      if(i>=nMon)
        return 0;
        int i=0;
    for( i=0;i<nMon;i++){

        dp[i]=max(coin[i] + maximum( nMon , coin ,i+2 ) ,  maximum(nMon, coin, i+1));

    }

    return dp[i];
    // return max(coin[i] + maximum( nMon , coin ,i+2 ) ,  maximum(nMon, coin, i+1));

//
//
//
//      for (i = 0; i <= n; i++)
//    {
//
//            if ( i==0 )
//                K[i]=0;
//            else if (wt[i-1] <= w)
//                  K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
//            else
//                  K[i][w] = K[i-1][w];
//
//    }
//
//
}




int main(){

    int t;
    int i=1;
    cin>>t;
    while(t--){

        int nMon;
        ll maxCoin=0;
        cin>>nMon;
        if(nMon==0)
           maxCoin=0;


        else{
            long coin[10000];
            for(int i=0;i<nMon;i++)
              cin>>coin[i];

            maxCoin=maximum(nMon,coin,0);
        }

        cout<<"Case "<<i++<<":"<<maxCoin<<endl;

    }

}
