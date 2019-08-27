#include<stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    double n,a,b,first=0.0,sec=0.0;
    scanf("%lf%lf%lf",&n,&a,&b);
    double dice[10005];
    for(int i=0;i<n;i++){
      scanf("%lf",&dice[i]);
      if(a==dice[i]){first++;}
      if(b==dice[i]){sec++;}
    }
    double prob=(first*sec)/(n*n);
    printf("%.10lf",prob);
    printf("\n");
  }
}
