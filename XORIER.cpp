#include<iostream>
#include<math.h>
#include<initializer_list>
using namespace std;
typedef long long int ll;





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










ll xorPairCount(ll arr[], int n, ll x)
{
    int result = 0; // Initialize result

    // create empty set that stores the visiting
    // element of array.
    // Refer below post for details of unordered_set
    // https://www.geeksforgeeks.org/unorderd_set-stl-uses/
    unordered_set<int> s;

    for (int i=0; i<n ; i++)
    {
        // If there exist an element in set s
        // with XOR equals to x^arr[i], that means
        // there exist an element such that the
        // XOR of element with arr[i] is equal to
        // x, then increment count.
        if (s.find(x^arr[i]) != s.end())
            result++;

        // Make element visited
        s.insert(arr[i]);
    }

    // return total count of pairs with XOR equal to x
    return result;
}






int main()
{

    int t;
    cin>>t;

    while(t--){
        long n;
        cin>>n;

        ll arr[100000];


        for(long i=0;i<n;i++)
           cin>>arr[i];

       ll max_ele = arr[0];

       quickSort(arr, 0, n-1);

       for (long i=1; i<n; i++)
          if (arr[i] > max_ele)
              max_ele = arr[i];
        ll m = (1 << (ll)(log2(max_ele) + 1) ) - 1;


        for(ll i=4,i<=m;i+2){
            count+=xorPairCount(arr, n, i);
        }


         //cout<<subsetXOR( arr, n)<<endl;


        /*for(int i=0;i<n-1;i++){
           for(int j=i+1;j<n;j++){
              long long int x=arr[i]^arr[j];
              if(x%2==0 && x>2)
                count++;
                */
        cout<<count<<endl;
       }

  }
