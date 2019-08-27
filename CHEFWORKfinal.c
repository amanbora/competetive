#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int coin[1000],type[1000];
  int c1=0,c2=0,c3=0,min;
  for(int i=0;i<n;i++){
    scanf("%d",&coin[i]);
  }
  for(int i=0;i<n;i++){
    scanf("%d",&type[i]);
    if(type[i]==1)
       c1=1;
    if(type[i]==2)
       c2=1;
    if(type[i]==3)
       c3=1;
  }

  if(c1==0 && c2==0 && c3==1){
     min=coin[0];
    for(int i=1;i<n;i++){
      if(min>coin[i])
         min=coin[i];
    }
  }

  else if(c1==1 && c2==1 && c3==0){
     int min1,min2;
     for(int i=0;i<n;i++){
       if(type[i]==1)
         min1=coin[i];
       if(type[i]==2)
         min2=coin[i];
     }
     for(int i=0;i<n;i++){
       if(type[i]==1)
         if(min1>coin[i])
            min1=coin[i];
       if(type[i]==2)
         if(min2>coin[i])
            min2=coin[i];
     }
     min=min1+min2;
   }

  else if(c1==1 && c2==1 && c3==1){
      int min1,min2,min3;
      for(int i=0;i<n;i++){
        if(type[i]==1)
          min1=coin[i];
        if(type[i]==2)
          min2=coin[i];
        if(type[i]==3)
          min3=coin[i];
      }
      for(int i=0;i<n;i++){
        if(type[i]==1)
          if(min1>coin[i])
             min1=coin[i];
        if(type[i]==2)
          if(min2>coin[i])
             min2=coin[i];
        if(type[i]==3)
           if(min3>coin[i])
            min3=coin[i];
      }
      if(min1+min2<min3)
         min=min1+min2;
      else
         min=min3;
    }

  else{
    for(int i=0;i<n;i++){
      if(type[i]==3)
        min=coin[i];
    }
    for(int i=0;i<n;i++){
      if(type[i]==3)
        if(min>coin[i])
           min=coin[i];
    }
  }
  printf("%d",min);
}
