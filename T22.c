#include<stdio.h>
int main()
{
    long N,i ;
    char ch ;
    int ans,x ;
    scanf("%ld",&N) ;
    long A[22][1000]={0},k=0 ;
    for(i=0 ; i<N+1 ; i++)
    {
        k=0 ;
        ch=0 ;
        while(ch != '\n')
        {
        ch = getchar();
        x=ch-'a' ;
        A[k][x]=A[k][x]+1 ;
        k++;
        }
    }
    long Q ;
    scanf(" %ld",&Q) ;
    while(Q--)
    {
        int L,R,C ;
        char P ;
        scanf("%d %d %d %c",&L,&R,&C,&P) ;
        L=L-1 ;
        R=R-1 ;
        C=C-1 ;
        ans=P-'a' ;
        printf("%ld\n",A[L+C][ans]) ;
    }
return 0 ;
}
