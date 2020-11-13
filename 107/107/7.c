#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 3
int main()
{ 


/*	int i,g,s,b;
	for(i=100;i<=999;i++)
	{
		g=i%10;
		s=(i/10)%10;
		b=i/100;
		if(i==g*g*g+s*s*s+b*b*b)
		{
			printf("%d\t",i);
		}
	}

*/




	//求素数 n>1很重要
	//2---根号n
/*	int i,sum,p;
	double n;
	printf("输入数：");
	scanf("%lf",&n);
	if(n<0)
	{
		printf("不能这样输入\n");
		exit(0);
	}
	p=sqrt(n);

	for(i=2;i<=p;i++)
	{
		if((int)n%i==0)
		{
			break;
		}
	}

	if(i>p && n>1 )
	{
		printf("是素数");
	}
	else
	{
		printf("不是素数");
	}
*/


/*	int i,n ,sum=0,p=1;
	printf("输入数：");
	scanf("%d",&n);
	if(n<0)
	{
		printf("fush没有阶乘");
		exit(0);
	}
	
	for(i=1;i<=n;i++)
	{
		p=p*i;
		sum=sum+p;
	}
	printf("阶乘和为%d",sum);
*/	





	//辗转相除法求最大公约数
/*	int a,b,c;
	printf("输入数：");
	scanf("%d%d",&a,&b);
	do
	{
		c=a%b;
		a=b;
		b=c;
	}while(c!=0);
	printf("最大公约数为%d",a);
*/

	//do while 执行的录入成绩
/*	int rs=0,min=100,max=0,cj,sum=0;
		float avg;
		
		
		do
		{
			printf("输入成绩：");
			scanf("%d",&cj);
			if(cj>0)
			{
				rs++;
				sum+=cj;
				if(cj>=max)max=cj;
				if(cj<=min)min=cj;
				
			}
			
		}while(cj>0);

		if(rs>0)
		{
			avg=(float)sum/rs;
			printf("人数：%d\t平均分%.2f\t最高分：%d\t最低分：%d\t",rs,avg,max,min);
		}
		else
			printf("shabi");	

*/
	
	//反位数
/*	int i,j,k=0;
	printf("输入一个数：");
	scanf("%d",&i);
	if(i<0)
	{
		printf("输入错误");
		exit(0);
	}
	do
	{ 
	  j=i%10;
	  i=i/10;
	  k=k*10+j;
	}while(i>0);
	printf("反位数为%d",k);
*/	
	
	//输入成绩算和平均值大小
/*	int rs=0,min=100,max=-1,cj,sum=0;
	float avg;
	printf("输入成绩：");
	scanf("%d",&cj);
	while(cj>=0)
	{
		rs++;
		sum+=cj;
		if(cj>=max)max=cj;
		if(cj<=min)min=cj;
		printf("输入成绩：");
		scanf("%d",&cj);
	}

	if(rs>0)
	{
		avg=(float)sum/rs;
		printf("人数：%d\t平均分%.2f\t最高分：%d\t最低分：%d\t",rs,avg,max,min);
	}
	else
		printf("shabi");
	
*/
	//输入年月日判断有多少天
/*	//int x1,x2,delta,p,q;
	double total,rate,money;
	int year,month,leapyear,days;
	int sum,i,j;
	printf("输入 年份 月份 日");
	scanf("%d%d%d",&year,&month,&days);
	//delta=b*b-4*a*c;
	if(year<0||month>12||month<1)
	{
		printf("输入有误");
		exit(0);
	}	
	//leapyear = year%4==0 && year%100!=0 || year%400==0;
	switch(month-1)
	{
	case 1:	sum=31;break;
	case 2:	sum=31+28;break;
	case 3:	sum=31+28+31;break;
	case 4:	sum=31+28+31+30;break;	
	case 5: sum=31+28+31+30+31;break;
	case 6: sum=31+28+31+30+31+30;break;
	case 7: sum=31+28+31+30+31+30+31;break;
	case 8: sum=31+28+31+30+31+30+31+31;break;
	case 9: sum=31+28+31+30+31+30+31+31+30;break;
	case 10: sum=31+28+31+30+31+30+31+31+30+31;break;
	case 11: sum=31+28+31+30+31+30+31+31+30+31+30;break;
	case 12: sum=31+28+31+30+31+30+31+31+30+31+30+31;break;
	default:
		printf("没有");
		break;
	}
	
		sum=sum+days;
	if(year%4==0 && year%100!=0 || year%400==0)
		sum++;		
	printf("天数为：%d",sum);
*/


	//一元二次方程
/*  double a,b,c;
	double x1,x2,delta,p,q;
	printf("输入系数");
	scanf("%lf%lf%lf",&a,&b,&c);
	delta=b*b-4*a*c;
	if(a==0)
	{
		printf("输入有误");
		exit(0);
	}	
	
		if(delta>0) 
		{
			x1=(-b+sqrt(delta))/(2*a);
			//x1=-b/(2*a)+sqrt(delta)/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			//x2=-b/(2*a)-sqrt(delta)/(2*a);
			printf("%lf %lf\n",x2,x1);
		}
		else if(delta==0)
		{
			x1=-b/2*a;
			x2=x1;
			printf("%lf %lf\n",x2,x1);
		}
		else
		{
			p=-b/2*a;
			q=sqrt(-delta)/2*a;
			printf("%lf+%lfi\t",p,q);
			printf("%lf-%lfi\t",p,q);
		}
		
*/
}