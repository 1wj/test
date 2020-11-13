#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=4;j>=0;j--)
		{
			if((j+i)%2)
			{
				j--;
				printf("%d",j);
				continue ;
			}
			--i;
			j--;
			printf("%d",j);
		}

	}





/*	int k=1,n=263;
	do
	{
		k*=n%10;
		n/=10;

	}while(n);
	printf("%d\n",k);
	*/
/*	int i=5;
	do
	{
		switch(i%2)
		{
		case 0: i--;
			break;
		case 1: i--;
			continue;
		}
		i--;
		i--;
		printf("%d",i);
	}while(i>0);
	*/
	/*int a1,a2;
	char c1,c2;
	scanf("%d %c %d %c",&a1,&c1,&a2,&c2);
	printf("%d%c%d%c",a1,c1,a2,c2);
	*/
	/*int a,c,b;
	scanf("a=%d,b=%d,c=%d",&a,&b,&c);
	printf("%d%d%d\n",a,b,c)*/
/*	double sum=0.0;
	int	j;
	double fz=2,fm=1,s=1;
	for(j=1;j<=20;j++)
	{
		sum=sum+(fz/fm)*s;
		printf("第%d次和为%.4lf\n",j,sum);
		printf("分子=%lf分母=%lf\n",fz,fm);
		//fm=fz;	
		fz=fz+fm;
		fm=fz-fm;
			s=-s;	
	}
	printf("和为%.4lf\n",sum);

	*/



/*	int i=0, j=0,num1,num=0;
	
	do
	{
		printf("输入一个数");
		scanf("%d",&num);
		if(num<=0)
		{
			printf("输入错误重新输入\n");
			
		}
	}while(num<=0);
	num1=num;
	while(num1>0)
	{
		i=num1%10;
		j=j*10+i;
		num1=num1/10;	
	}	
	
	
	if(j==num)
	{
		printf("%d是回文数\n",num);
	}
	else
		printf("%d不是回文数\n",num);
	*/
}