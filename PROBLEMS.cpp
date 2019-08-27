#include<iostream>
#include <algorithm>
#include<cstdlib>

using namespace std;


void sort_by_marks(int data[][2], int n){
  // assumption: 1st column contains marks, 2nd contains roll number
  auto ptr = (pair<int, int>*) data;
  sort(ptr, ptr+n);
}

/*
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


int partition (int arr[][2], int low, int high)
{
    int pivot = arr[high][0];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j][0] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i][0], &arr[j][0]);
            swap(&arr[i][1], &arr[j][1]);
        }
    }
    swap(&arr[i + 1][0], &arr[high][0]);
    swap(&arr[i + 1][1], &arr[high][1]);
    return (i + 1);
}


void quickSort(int arr[][2], int low, int high)
{
    if (low < high)
    {
         pi is partitioning index, arr[p] is now
           at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
*/



int main(){

  int p,s;
  cin>>p>>s;

 /*static int** arr = new int*[2*p];
  for(int i = 0; i < 2*p; ++i)
    arr[i] = new int[s];
*/


//int *arr = new int[200000*30];
static int arr[200005][30];

  for(int i=0 ; i<2*p; i++){
    for(int j=0;j<s;j++)
      cin>>arr[i][j];
  }

static int count[100004][2];


  int k=0;


int kuch[30][2];






  for(int i=0;i<2*p;i+=2){
    for(int j=0;j<s;j++){
      kuch[j][0]=arr[i][j];
      kuch[j][1]=arr[i+1][j];
    }
     sort_by_marks(kuch, s);

     count[k][1]=k+1;
     for(int j=0;j<s-1 ;j++ )
     {
       if(kuch[j][1]>kuch[j+1][1])
         count[k][0]++;
     }

     k++;

  }


  sort_by_marks(count, p);







/*
  for(int i=1; i<2*p; i+=2){
     count[k][1]=k+1;
      for(int j=0;j<s-1 ;j++ )
      {
        if(arr[i][j]>arr[i][j+1])
          count[k][0]++;
      }

      k++;

  }
  */



   for(int i=0;i<p;i++)
   {
     cout<<count[i][1]<<"\n";

   }

}
