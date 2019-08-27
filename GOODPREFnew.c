#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    long int n,a=0,b=0; char s[1000];char t[1000000], t1[1000000],t2[1000000];
    int c=0,c1=0,c2=0,c3=0;
    scanf("%s%ld",s,&n);
    strcpy(t,s);
    strcpy(t1,s);
    strcpy(t2,s);
    if(n==1){
      for(long j=0;j<strlen(t);j++)
      {
          if(t[j]=='a')
             a++;
          else
             b++;
         if(a>b)
           c++;
      }
    }
    else if(n==2){
      for(int j=0;j<n-1;j++){
        strcat(t,s);
      }
      for(long j=0;j<strlen(t);j++)
      {
          if(t[j]=='a')
             a++;
          else
             b++;
         if(a>b)
           c++;
      }
    }
    else if(n==3){
      for(int j=0;j<n-1;j++){
        strcat(t,s);
      }
      for(long j=0;j<strlen(t);j++)
      {
          if(t[j]=='a')
             a++;
          else
             b++;
         if(a>b)
           c++;
      }
    }
    else if(n==4){
      for(int j=0;j<n-1;j++){
        strcat(t,s);
      }
      for(long j=0;j<strlen(t);j++)
      {
          if(t[j]=='a')
             a++;
          else
             b++;
         if(a>b)
           c++;
      }
    }
    else{
      for(int j=0;j<1;j++){
        strcat(t,s);
      }
      for(long j=0;j<strlen(t);j++)
      {
          if(t[j]=='a')
             a++;
          else
             b++;
         if(a>b)
           c1++;
        }
        a=0;b=0;
        for(int j=0;j<2;j++){
          strcat(t1,s);
        }
        for(long j=0;j<strlen(t1);j++)
        {
            if(t1[j]=='a')
               a++;
            else
               b++;
           if(a>b)
             c2++;
          }
            a=0;b=0;
          for(int j=0;j<3;j++){
            strcat(t2,s);
          }
          for(long j=0;j<strlen(t2);j++)
          {
              if(t2[j]=='a')
                 a++;
              else
                 b++;
             if(a>b)
               c3++;
            }

          c=c1+(n-2)*(c2-c1)+(n-3)*(c3-c2-c2+c1);
              printf("%d %d %d\n",c1,c2,c3);
    }
    printf("%d\n",c);
  }
}
