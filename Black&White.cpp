#include<iostream>
using namespace std;


int movx[8] = {2,2,-2,-2,1,1,1,1};
int movy[8] = {1,-1,1,-1,2,-2,2,-2};
int mx[8] = {1,1,1,-1,-1,-1,0,0};
int my[8] = {1,0,-1,1,0,-1,1,-1};


int isnotsafe(int x, int y, int n, int m){
    int count=0;
    for(int i=0;i<8;i++){
        if( (x+movx[i]>=0) && (y+movy[i]>=0) && (x+movx[i]<n) && (y+movy[i])<m)
              count++;
        // if( (x+mx[i]<0) || (y+my[i]<0) || (x+mx[i]>=n) || (y+my[i])>=m)
        //       count++;
    }
    return count;
}

void solve(int n, int m){
    int moves = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             moves += n*m-1;
             moves -= isnotsafe(i,j,n,m);

        }
    }
    cout<<moves<<endl;
}

int main(){
    int t;
    cin>>t;



    while(t--){
        int n,m;
        cin>>n>>m;
        solve(n,m);



    }

}
