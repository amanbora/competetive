#include<iostream>
#include<cmath>
using namespace std;





void swap(long* a, long* b)
{
    long t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
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




int main(){

    int t;
    cin>>t;

    while(t--){
      long n;
      cin>>n;
      long arr[100000];

      for(long i=0;i<n;i++){
        cin>>arr[i];
      }

      quickSort(arr, 0, n-1);

      long min=abs(arr[0]-arr[1]);

      for(long i=1;i<n-1;i++){
          long min2=abs(arr[i]-arr[i+1]);
          if(min2<min)
             min=min2;
      }

      cout<<min;
      cout<<"\n";


    }
}
