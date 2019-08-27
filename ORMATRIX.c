#include<stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n,m;
    int arr[1000][1000];
    scanf("%d%d",&n,&m);

    int flag=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        scanf("%d",&arr[i][j]);
        if(arr[i][j]==1)flag=1;
      }
    }

   if(flag==0){
     for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
         printf("%d "arr[i][j]);
       }
       printf("\n");
     }
   }
   else{
       for(int i=0;i<n;i++){
         int fc=0,fr=0;
         for(int j=0;j<m;j++){
           if(arr[i][j]==1)
           {
             fc=1;

            }
           if(arr[i][j]==1)
           {
             fr=1;

           }

         }
        
       }

   }

  }
}
