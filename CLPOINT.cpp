#include<iostream>
#include<math.h>

using namespace std;

void quickSort(long arr[], long low, long high);
long partition (long arr[], long low, long high);
void swap(long* a, long* b);


int main(){
  int t;
  cin>>t;
  while(t>0){
    long n;
    int k;
    cin>>n>>k;

    long arr[100000][5];
    long num[100000]={0};
    long ind[100000]; long p=0;

    for(long i=0;i<n;i++){
      for(long j=0;j<k;j++){
        cin>>arr[i][j];
        num[i]=10*num[i]+abs(arr[i][j]);
      }
    }
      long small=0;
      for(long j=0;j<n;j++){
        small=small+abs(num[j]-num[0]);
      }

      for(long i=1;i<n;i++){
        long k=num[i]; long sum=0;
        for(long j=0;j<n;j++){
          sum=sum+abs(num[j]-num[i]);
        }
        if(sum<=small){
          small=sum;
          ind[p++]=i;
        }
      }
      if(p==1){
        int dig=0;
        for(double i=0;i<k;i++){
          //double dig=(double)num[ind[p-1]]%pow(10.0,(double)(n-k));
          double mod=pow(10.0,k-i-1);
           dig=num[ind[p-1]]/(int)mod;
            cout<<dig<<" ";
            num[ind[p-1]]=num[ind[p-1]]%(int)mod;
        }
      }

      else{

          quickSort(num, 0, n-1);
          int dig=0;
          for(int i=0;i<k;i++){
            //double dig=(double)num[0]%pow(10.0,(double)(n-k));
            double mod=pow(10.0,k-i-1);
             dig=num[0]/(int)mod;
            cout<<dig<<" ";
            num[0]=num[0]%(int)mod;
      }
    }
       cout<<"\n";
       t--;
  }
}






void swap(long* a, long* b)
{
    long t = *a;
    *a = *b;
    *b = t;
}

long partition (long arr[], long low, long high)
{
    long pivot = arr[high];    // pivot
    long i = (low - 1);  // Index of smaller element

    for (long j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(long arr[], long low, long high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        long pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
