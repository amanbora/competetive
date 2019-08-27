#include<stdio.h>
int toprime(int a);
//int sum(int arr[100025],int n);
//void prime(int arr[100025],int l,int r);
int main(){
  int n;
  int q;
  scanf("%d",&n);
  scanf("%d",&q);
  int arr[100025];
  int que[100025][3];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<q;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&que[i][j]);
    }
  }

  int sum;
  for(int i=0;i<q;i++){
    if(que[i][0]==2)
    {
      sum=0;
      for(int i=0;i<n;i++){
        sum=sum+arr[i];
      }
      printf("%d\n",sum);
    }

    else if(que[i][0]==1){

      for(int i=que[i][1]-1;i<que[i][2];i++){
        if(arr[i]!=0||arr[i]!=1||arr[i]!=2)
           arr[i]=arr[i]-toprime(arr[i]);
      }
    }
  }

}

/**int sum(int arr[100025],int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum=sum+arr[i];
  }
  return sum;
}

void prime(int arr[100025],int l,int r){
  for(int i=l-1;i<r;i++){
    if(arr[i]!=0||arr[i]!=1||arr[i]!=2)
       arr[i]=arr[i]-toprime(arr[i]);
  }

}
*/
int toprime(int a){
  for(int k=a-1;k>=a/2;k--)
  { int flag=0, a;
    for(int j=2;j*j<=k;j++){
      if(k%j==0)
       { flag=1;
         break;
       }
      else
        a=k;
    }
    if(flag==0)
      return a;
  }
}
