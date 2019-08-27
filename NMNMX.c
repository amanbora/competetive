#include<stdio.h>
#include<math.h>
void combinationUtil(int arr[], int , int , int ,
                     int data[], int );
void printCombination(int arr[],int , int k);
void quickSort(int arr[], int low, int high);
void swap(int* a, int* b);
int partition (int arr[], int low, int high);




int main()
{

    int t;
    scanf("%d",&t);
    while(t--){
      int arr[5000];
      int n,k;
      scanf("%d%d",&n,&k);
      for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

      int  p=sizeof(arr)/sizeof(arr[0]);
      quickSort(arr,0,p-1);

      arr[0]=1;
      arr[n-1]=1;

      printCombination(arr, p, k);



    }
  }





    void swap(int* a, int* b)
    {
        int t = *a;
        *a = *b;
        *b = t;
    }

    /* This function takes last element as pivot, places
       the pivot element at its correct position in sorted
        array, and places all smaller (smaller than pivot)
       to left of pivot and all greater elements to right
       of pivot */
    int partition (int arr[], int low, int high)
    {
        int pivot = arr[high];    // pivot
        int i = (low - 1);  // Index of smaller element

        for (int j = low; j <= high- 1; j++)
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
    void quickSort(int arr[], int low, int high)
    {
        if (low < high)
        {
            /* pi is partitioning index, arr[p] is now
               at right place */
            int pi = partition(arr, low, high);

            // Separately sort elements before
            // partition and after partition
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);




        }
    }







    // The main function that prints all combinations of
    // size r in arr[] of size n. This function mainly
    // uses combinationUtil()
    void printCombination(int arr[], int n, int r)
    {
        // A temporary array to store all combination
        // one by one
        int data[r];


        // Print all combination using temprary array 'data[]'
         combinationUtil(arr, n, r, 0, data, 0);

    }

    /* arr[]  ---> Input Array
       n      ---> Size of input array
       r      ---> Size of a combination to be printed
       index  ---> Current index in data[]
       data[] ---> Temporary array to store current combination
       i      ---> index of current element in arr[]     */
    void combinationUtil(int arr[], int n, int r, int index,
                         int data[], int i)
    {
          long prod=1;
        // Current cobination is ready, print it
        if (index == r) {
            for (int j = 0; j < r; j++)
              {  prod=prod * data[j];
                //prod=prod%(long)(pow(10,9)+7);
                printf("%ld ", prod);
              }
              printf("\n");
            //    printf("%d ", data[j]);
          //  printf("\n");
            return;
        }

        // When no more elements are there to put in data[]
        if (i >= n)
            {
            //  printf("%ld\n",prod);
              return;
            }

        // current is included, put next at next location
        data[index] = arr[i];
        combinationUtil(arr, n, r, index + 1, data, i + 1);

        // current is excluded, replace it with next
        // (Note that i+1 is passed, but index is not
        // changed)
        combinationUtil(arr, n, r, index, data, i + 1);
    }
