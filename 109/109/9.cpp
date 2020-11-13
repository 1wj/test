#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.1415926
int main()
{
	int n,i,m,j;
	int p,q,p_flag,q_flag;
	printf("输入一个偶数");
	scanf("%d",&n);
	
	if(n%2==1||n<4)
	{
		printf("输入有误");
		exit(0);
	}
	//p=1;
	for(p=2;p<n;p++)
	//do
	{
		
		//p=p+1;
		
		//p_flag=1;
		p_flag=0;
		for(i=2;i<=p/2;i++)
		{
			if(p%i==0)
			{
					
				break;
			}
		}
		if(i>p/2)
		{
			p_flag=1;
			//printf("p=%d,p_flag=%d",p,p_flag);
		}
			//q_flag=1;	
			q_flag=0;///核心
		q=n-p;
		for(j=2;j<=q/2;j++)
		{
			if(q%j==0)
			{
			
				break;
			}
		}
		if(j>=q/2)
		{
			
			q_flag=1;
		}
		
		if(q_flag*p_flag==1)
		{
			printf("%d\t%d\n",p,q);
			break;
		}
	}	//while(p_flag*q_flag==0);
		
			//printf("%d\t%d\n",p,q);
			//return 0;
		
	


/*	
	int i;
	double s;
	for(i=1;i<10;i++)
	{
		s=PI*i*i;
		if(s>100.0)
			continue ;
		printf("%.2lf\t",s);
	}
*/


/*  int k,sum=0;
	for(k=100;k<=200;k++)
	{
		if(k%3==0)
		{
			continue;
		}
		printf(" %d",k);
		sum++;
		if(sum%10==0)
		printf("\n");
	}
		printf("\n");
*/



/*	int i,j ,k; 
	for(i=1;i<=19;i++)
	{
		for(j=1;j<=31;j++)
		{
			for(k=1;k<=98;k++)
			{
				if(i+j+k==100 && 5*i+3*j+k*0.5==100)
				{
					printf("母鸡数：%d\t公鸡数：%d\t小鸡数：%d\n",i,j,k);
					
					break;
				}
			}
	
		}
	
	}
*/	
	
	
	
	
	
	
	
	
	/*int i,j,p;
	printf("-------------------------------------\n");
	for(i=1;i<10;i++)
	{
		printf("%4d",i);
	}
	printf("\n-------------------------------------\n");
	for(i=1;i<10;i++)
	{
		printf("%d",i);
		for(j=1;j<10;j++)
		{
			p=i*j;
			printf("%4d",p);
		}
		printf("\n");
	}
	printf("\n-------------------------------------\n");*/
}