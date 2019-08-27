#include<stdio.h>
#include<string.h>
int main(){
int t;
scanf("%d\n",&t);
for(int i=0;i<t;i++){
  char line[10000];
  gets(line);
  int c=0;
  for(int j=0;j<strlen(line);j++){
    if(line[j]==32||line[j+1]=='\0')
      { c++;
        if(line[j+1]==32)
          j+=2;
      }
    }
   printf("%d\n",c);
  }
}
