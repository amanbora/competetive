#include<stdio.h>
#include<string.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int arr[50][50]; char name[50], winner[50];
    int n;
    scanf("%d",&n);
    scanf("%s",name);
  for(int i=0;i<n;i++){
    for(int j=0;j<=50;j++){
       scanf("%d",&arr[i][j]);
       if(arr[i][j]=='\0')
         break;
     }
    }

  int flag0=0,flag1=0,c0=0,c1=0;

  if(strcmp(name,"Dee")==0){

          printf("DDDDDDDee\n");
          for(int i=0;i<n;i++){
             if(arr[i][0]==1){
               flag1=1;
               c1++;
               printf("DDDDDDDee\n");
             }
             if(arr[i][0]==0){
               flag0=1;
               c0++;
               printf("DDDDDDDee\n");
             }
            }

          if(flag0==1 && flag1==0)
             strcpy(winner,"Dee");

          else if(flag0==0&&flag1==1)
             strcpy(winner,"Dum");

          else if(flag0==1&&flag1==1)
          {   if(c0>c1)
               strcpy(winner,"Dee");
           else
              printf("Dum");

          }
        }

    else if(strcmp(name,"Dum")==0){


                  for(int i=0;i<n;i++){
                     if(arr[i][0]==1){
                       flag1=1;
                       c1++;
                     }
                     if(arr[i][0]==0){
                       flag0=1;
                       c0++;
                     }
                    }

                  if(flag0==1&&flag1==0)
                     strcpy(winner,"Dee");

                  else if(flag0==0&&flag1==1)
                     strcpy(winner,"Dum");

                  else if(flag0==1&&flag1==1)
                     {if(c1>c0)
                       strcpy(winner,"Dum");

                   else
                       strcpy(winner,"Dee");
          }
  }
  printf("%s\n",winner);
}
}
