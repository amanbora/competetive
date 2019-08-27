#include<iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr1[105],arr2[105],arr3[105];

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<n;i++){
        cin>>arr3[i];
    }

    int lis1[105],lis2[105],lis3[105],len[3];

    lis1[0]=1;
    for(int i=1;i<n;i++){

        lis1[i] = 1;
        for(int j=0;j<i;j++){

          if( arr1[i]>arr1[j] && lis1[i]<lis1[j]+1){
                lis1[i]=lis1[j]+1;
          }
          else if( arr2[i]>arr1[j] && lis1[i]<lis1[j]+1){
              lis1[i]=lis1[j]+1;
              int temp = arr2[i];
              arr2[i] = arr1[i];
              arr1[i] = temp;
          }
          else if( arr3[i]>arr1[j] && lis1[i]<lis1[j]+1){
              lis1[i]=lis1[j]+1;
              int temp = arr3[i];
              arr3[i] = arr1[i];
              arr1[i] = temp;
          }
        }
    }
    len[0] = *max_element(lis1, lis1+n);

    lis2[0]=1;
    for(int i=1;i<n;i++){

        lis2[i] = 1;

        for(int j=0;j<i;j++){

          if( arr2[i]>arr2[j] && lis2[i]<lis2[j]+1){
                lis2[i]=lis2[j]+1;
          }
          else if( arr3[i]>arr2[j] && lis2[i]<lis2[j]+1){
              lis2[i]=lis2[j]+1;
              int temp = arr3[i];
              arr3[i] = arr2[i];
              arr2[i] = temp;
          }
        }
    }
    len[1] = *max_element(lis2,lis2+n);

    lis3[0]=1;
    for(int i=1;i<n;i++){

        lis3[i] = 1;

        for(int j=0;j<i;j++){

          if( arr3[i]>arr3[j] && lis3[i]<lis3[j]+1){
                lis3[i]=lis3[j]+1;
          }
    }
  }
  len[2] = *max_element(lis3,lis3+n);

  sort(len,len+2);

  cout<<len[2]+len[1];

}
