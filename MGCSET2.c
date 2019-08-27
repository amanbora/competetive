#include<stdio.h>
#include<string.h>

long count(int arr[],int,int m);
int main(){
  int t;
  scanf("%d",&t );
  while(t--){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[1000];
    long sum=0;
    for(int i=0;i<n;i++)
    {    scanf("%d",&arr[i]);
        sum+=arr[i];
   }

    long c=count(arr,n,m);
  //  if(sum%m==0)
  //     c=c-1;

     printf("%ld\n",c);

  }
}


long count(int arr[], int N,int K)
   {
     int result = 0;

// Find sum of all subarrays and increment
// result if sum is even
for (int i=0; i<=N-1; i++)
{
    int sum = 0;
    for (int j=i; j<=N-1; j++)
    {
        sum = sum + arr[j];
        if (sum % K == 0)
                result++;
    }
}

return (result);
   }
