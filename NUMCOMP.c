#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long int t,a,b,n;
	scanf ("%lld", &t);
	while (t>0)
	{
		scanf("%lld %lld %lld", &a,&b,&n);
		if (n%2==0)
		{
			if(abs(a)>abs(b))
			printf("1\n");
			else if (abs(a)<abs(b))
			printf("2\n");
			else printf("0\n");
		}
		else if (n%2==1)
		{
			if(a>b)
			printf("1\n");
			else if (b>a)
			printf("2\n");
			else printf("0\n");
		}
		t--;
	}
	return 0;
}
