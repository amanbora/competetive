#include<stdio.h>
#include<stdlib.h>
void merge(long int arr[],long int l,long int m, int r);
void mergeSort(long int arr[], long int l,long int r);
int binarySearch(long int arr[],long int l,long int r,float x);

int main(){
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    long int n;
    scanf("%ld",&n);
    long int num[100000];

    for(long int j=0;j<n;j++){
      scanf("%ld",&num[j]);
    }
    int c=0;
    mergeSort(num,0,n-1);




    for(long int j=0;j<n;j++){
      for(long int k=j+1;k<n;k++){
        float avg=(num[j]+num[k])/2.0;
        int result = binarySearch(num, j, k, avg);
        if(result!=-1)
         c++;
      }
    }
    printf("%d\n",c);
  }
}




void merge(long int arr[],long int l,long int m, int r)
{
  long  int i, j, k;
  long  int n1 = m - l + 1;
  long  int n2 =  r - m;

    /* create temp arrays */
  long int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(long int arr[],long int l,long int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}





int binarySearch(long int arr[],long int l,long int r, float x)
{
   if (r >= l)
   {
      long int mid = l + (r - l)/2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        else if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid+1, r, x);
   }

   // We reach here when element is not
   // present in array
   return -1;
}
