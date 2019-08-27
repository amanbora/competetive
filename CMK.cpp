#include<iostream>
using namespace std;

void quickSort(long arr[], long low, long high);
long partition (long arr[], long low, long high);
void swap(long* a, long* b);

int main(){
  int t;
  cin>>t;
  while(t--){

    long n,k;
    cin>>n>>k;

    long mk[100005],ch[100005],sumc=0,summ=0;

    for(long i=0;i<n;i++)
    {  cin>>mk[i];
       summ=sum+mk[i];
     }
    for(long i=0;i<n;i++)
    {  cin>>ch[i];
       sumc=sum+mk[i];
     }
     quickSort(mk, 0, n-1);
     quickSort(ch, 0, n-1);

     long count=0,flag=0;

     if(ch[n-1]<=mk[0] && k>1)
          cout<<"NO"<<"\n";
     else if(summ-sumc>1 && k>1)
          cout<<"NO"<<"\n";
     else{
      long temp=0;
      for(long i=0;i<n;i++){
        for(long j=temp;j<n;j++){
          if(mk[i]<ch[j])
          {  count++;
             temp=j+1;
          }
          if(count>=k)
          {
            cout<<"YES"<<"\n";
            flag=1;
            break;
          }
          if(flag==1)break;
       }
       if(flag==1)break;
      }
      if(flag==0)
        cout<<"NO"<<"\n";

    }
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
