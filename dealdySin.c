#include<stdio.h>
#define gc getchar_unlocked
int read_int();
int main(){
 int t=read_int();
  for(int i=1;i<=t;i++){
    int x=read_int(),y=read_int();
  if(x!=y){
   while(x>0&&y>0){
   if(x>y)
      x=x-y;
   else if(y>x)
      y=y-x;
   else
      break;
  }
}
  printf("%d",(x+y));
  printf("\n");
}
}
int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
