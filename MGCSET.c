

#include <stdio.h>


int main()
{   int t;
    scanf("%d",&t);
    while(t--){
    int arr[1000];
    int n,m,c=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
       scanf("%d",&arr[i]);



       for(int k=0;k<n;k++)
       {int sum=0;
           for(int i=k;i<n;i++)
           {  int sum=0;
               for(int j=k;j<=i;j++)
               {  sum=sum+arr[j];
                     }

        //      if(sum%m==0)c++;

           }
           if(sum%m==0)c++;

        }
    printf("%d\n",c);


}
}
