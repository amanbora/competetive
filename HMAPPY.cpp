#include<iostream>
#include<algorithm>

using namespace std;
typedef  long long int ll;


void swap(ll* a, ll* b)
{
    ll t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
ll partitionone (ll arr[],ll index[], ll low, ll high)
{
    ll pivot = arr[high];    // pivot
    ll i = (low - 1);  // Index of smaller element

    for (ll j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] >= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
            swap(&index[i],&index[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    swap(&index[i+1],&index[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSortone(ll arr[],ll index[], ll low, ll high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        ll pi = partitionone(arr,index, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSortone(arr,index, low, pi - 1);
        quickSortone(arr,index, pi + 1, high);
    }

}

ll partitiontwo (ll arr[],ll index[], ll low, ll high)
{
    ll pivot = arr[high];    // pivot
    ll i = (low - 1);  // Index of smaller element

    for (ll j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] >= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
            // swap(&index[i],&index[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    // swap(&index[i+1],&index[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSorttwo(ll arr[],ll index[], ll low, ll high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        ll pi = partitiontwo(arr,index, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSorttwo(arr,index, low, pi - 1);
        quickSorttwo(arr,index, pi + 1, high);
    }

}




int main(){




      ll n,m;
       cin>>n>>m;

       ll aaa[100000];
       ll bbb[100000];
       ll mult[100000];
       ll index[100000];

       ll sum=0;



       for(ll i=1;i<=n;i++){
           cin>>aaa[i];
           sum=sum+aaa[i];
       }

       //cout<<sum<<endl;

       for(ll i=1;i<=n;i++){
           cin>>bbb[i];
           mult[i]=aaa[i]*bbb[i];
           index[i]=i;
       }


       //case 1

       if(n==1)
       {
         if(aaa[1]>m)cout<<(aaa[1]-m)*bbb[1];
         else cout<<0;
       }

       else if(sum<=m)
         cout<<0;


       //case 2

       else{


             quickSortone(mult,index, 1, n);

            // for(long i=1;i<=n;i++)cout<<mult[i];
            // cout<<endl;

            ll j,i=1;

            int flag=0;

            while(m>0){

                  while(mult[i]>=mult[i+1] && m>0 && mult[i]>-1)
                  {
                      mult[i]-=bbb[index[i]];
                      m--;
                  }
                      i++;
                      if(i==n)i=1;
                      j=1;
                }

              //
              // for(ll i=1; i<n ;i++){
              //      j=i;
              //      while(mult[i]>=mult[i+1] && m>0 && mult[i]>-1){
              //
              //
              //            if((aaa[index[i]]-m)*bbb[index[i]]>=mult[i+1])
              //            {
              //              mult[i]=(aaa[index[i]]-m)*bbb[index[i]];
              //              flag=1;
              //              break;
              //            }
              //
              //            else{
              //              mult[i]-=bbb[index[i]];
              //              m--;
              //            }
              //
              //            if(flag==1)break;
              //
              //
              //      }
              //      // cout<<mult[i]<<endl;
              //
              //  }



             }//cout<<mult[2];

             quickSorttwo(mult,index, 1, j+2);
             // ll ans=(flag==1)?mult[j]:mult[j+1];
             cout<<mult[1];

           }

}
