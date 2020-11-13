#include<stdio.h>
void pr(int n)
{
	if(n>9)
	{
		pr(n/10);

	}
		printf( "%d ",n%10);
}