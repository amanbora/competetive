#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    long int n,a=0,b=0; char s[1000];char t[1000000];
    scanf("%s%ld",s,&n);
    strcpy(t, s);
    for(int j=0;j<n-1;j++){
      strcat(t,s);
    }
    long int c=0;
    for(long j=0;j<strlen(t);j++)
    {
        if(t[j]=='a')
           a++;
        else
           b++;
       if(a>b)
         c++;
    }
  printf("%ld\n",c);
}
}
