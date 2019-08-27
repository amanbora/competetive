#include<stdio.h>
#include<string.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){

    char ch[100];
    int n;
    scanf("%d\n",&n);
    gets(ch);



    for(int j=0;j<(n/2)*2 ;j+=2)
    {  char t =ch[j];
       ch[j]=ch[j+1];
       ch[j+1]=t;
     }

  for(int i=0;i<strlen(ch);i++){
    if(ch[i]<109)ch[i]=109+(110-ch[i]);

    else if(ch[i]>=109)ch[i]=109-(ch[i]-110);

  }
  for(int i=0;i<strlen(ch);i++)printf("%c",ch[i]);
  printf("\n");

}
}
