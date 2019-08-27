#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
  char s[1000];
  gets(s);
  int j=0,c;
  for(int k=97;k<=122;k++)
    { c=0;
      for(int i=0;i<strlen(s);i++)
       { char ch=tolower(s[i]);
         if(ch==k||ch==32||ch=='.')
            c++;
       }
      if(c==0)
        break;
    }
    if(c!=0)
      printf("Yes");
    if(c==0)
      printf("No");
  }
