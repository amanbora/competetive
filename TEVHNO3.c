#include<stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    int n;
    scanf("%d",&n);
    int con[10000];
    for(int i=0;i<n;i++){
      scanf("%d",&con[i]);
    }
    int  q;
    scanf("%d",&q);
    int que[2];
    for(int i=0;i<q;i++){
      int c=0;
      scanf("%d",&que[0]);
      scanf("%d",&que[1]);
      for(int j=que[0]-1;j<que[1];j++){
        c=c+con[j];
      }
      printf("%d\n",c);
    }
  }
}
