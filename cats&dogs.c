 #include<stdio.h>
 int main()
 {
   long t;
   scanf("%ld",&t);
   for(long i=1;i<=t;i++){
     unsigned long c,d,l;
     scanf("%lu",&c);
     scanf("%lu",&d);
     scanf("%lu",&l);
     if(l>=(4*d)&&l<=4*(c+d)){
       if(l%4==0)
         printf("yes");
      else
       printf("no");
    }
    else
      printf("no");
    printf("\n");
   }
   return 0;
 }
