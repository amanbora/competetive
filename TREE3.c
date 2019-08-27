#include<stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    int arr[5000][2], count[5000]={0};
    for(int i=0;i<n-1;i++){
      for(int j=0;j<2;j++)
        scanf("%d",&arr[i][j]);
    }
   int flag=0;


    for(int i=0;i<n;i++){
      for(int j=i+1;j<n-1;j++){
        if(arr[i][1]==arr[j][1])
           flag=1;
      }
    }

  if(flag==0){
        for(int i=0;i<n-1;i++){
          for(int j=0;j<n;j++){
            if(arr[j][0]==i+1||arr[j][1]==i+1)
               count[i]++;
          }
        }
        for(int i=0;i<n-1;i++){
            if(count[i]%3!=0)
              flag=1;
      }
    }
    int p;
  if(flag==0){
    printf("YES\n");
    for(int i=0;i<n-1;i++){
      if(count[i]!=0){
        printf("%d ",i+1);
         for(int j=0;j<n-1;j++)
        {
          if(arr[j][0]==i+1)
             printf("%d ",arr[j][1]);
          if(count[i]>3){
           if(p++==3)
           {
             p=0;
             printf("\n%d ",i+1);
           }
        }
      }
      }

    }
    printf("\n");
  }
  else
    printf("NO\n");
}

}
