// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<cstring>
#include<algorithm>

using namespace std;


//
// void flip(int k){
//
//     if(s[k] == 1)
//         s[k]=5;
//
//     if(k>0 && k<str.length()-1){
//         if(s[k] == 5)
//         {
//           s[k-1] = s[k-1]^1;
//           s[k+1] = s[k+1]^1;
//         }
//
//         if(s[k-1] == 1)
//             flip(k-1);
//         flip(k+1);
//         return;
//     }
//     else if(k == 0 ){
//         if(s[k] == 5)
//           s[k+1] = s[k+1]^1;
//         flip(k+1);
//         return;
//     }
//     else if(k == str.length()-1){
//       if(s[k] == 5)
//         s[k-1] = s[k-1]^1;
//       if(s[k-1] == 1)
//           flip(k-1);
//       return;
//     }
//
//     return;
//
// }
int main(){
    int t;
    cin>>t;
    string str;
    int s[100005];

    while(t--){

        cin>>str;

        int count = 0;
        int flag=0;

        for(int i=0;i<str.length();i++){

            s[i] = int(str[i]) - 48;

            if(s[i])
              count++;
        }

        // flip(0);
        //
        // // if(arr[s.length()-1]==1){
        // //     index.push_back(s.length()-1);
        // //     arr[s.length()-2] = arr[s.length()-2]^1;
        // // }
        //
        // for(int i=0;i<str.length();i++){
        //     if( s[i] == 0){
        //         flag=1;
        //         break;
        //     }
        //
        // }

        if(count==0)cout<<"LOSE";
        else if(count%2==0)cout<<"LOSE";
        else cout<<"WIN";

        // for(int i=0;i<str.length();i++){
        //     cout<<s[i]<<" ";
        // }

        cout<<endl;
    }
}
