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




	//������ n>1����Ҫ
	//2---����n
/*	int i,sum,p;
	double n;
	printf("��������");
	scanf("%lf",&n);
	if(n<0)
	{
		printf("������������\n");
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
		printf("������");
	}
	else
	{
		printf("��������");
	}
*/


/*	int i,n ,sum=0,p=1;
	printf("��������");
	scanf("%d",&n);
	if(n<0)
	{
		printf("fushû�н׳�");
		exit(0);
	}
	
	for(i=1;i<=n;i++)
	{
		p=p*i;
		sum=sum+p;
	}
	printf("�׳˺�Ϊ%d",sum);
*/	





	//շת����������Լ��
/*	int a,b,c;
	printf("��������");
	scanf("%d%d",&a,&b);
	do
	{
		c=a%b;
		a=b;
		b=c;
	}while(c!=0);
	printf("���Լ��Ϊ%d",a);
*/

	//do while ִ�е�¼��ɼ�
/*	int rs=0,min=100,max=0,cj,sum=0;
		float avg;
		
		
		do
		{
			printf("����ɼ���");
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
			printf("������%d\tƽ����%.2f\t��߷֣�%d\t��ͷ֣�%d\t",rs,avg,max,min);
		}
		else
			printf("shabi");	

*/
	
	//��λ��
/*	int i,j,k=0;
	printf("����һ������");
	scanf("%d",&i);
	if(i<0)
	{
		printf("�������");
		exit(0);
	}
	do
	{ 
	  j=i%10;
	  i=i/10;
	  k=k*10+j;
	}while(i>0);
	printf("��λ��Ϊ%d",k);
*/	
	
	//����ɼ����ƽ��ֵ��С
/*	int rs=0,min=100,max=-1,cj,sum=0;
	float avg;
	printf("����ɼ���");
	scanf("%d",&cj);
	while(cj>=0)
	{
		rs++;
		sum+=cj;
		if(cj>=max)max=cj;
		if(cj<=min)min=cj;
		printf("����ɼ���");
		scanf("%d",&cj);
	}

	if(rs>0)
	{
		avg=(float)sum/rs;
		printf("������%d\tƽ����%.2f\t��߷֣�%d\t��ͷ֣�%d\t",rs,avg,max,min);
	}
	else
		printf("shabi");
	
*/
	//�����������ж��ж�����
/*	//int x1,x2,delta,p,q;
	double total,rate,money;
	int year,month,leapyear,days;
	int sum,i,j;
	printf("���� ��� �·� ��");
	scanf("%d%d%d",&year,&month,&days);
	//delta=b*b-4*a*c;
	if(year<0||month>12||month<1)
	{
		printf("��������");
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
		printf("û��");
		break;
	}
	
		sum=sum+days;
	if(year%4==0 && year%100!=0 || year%400==0)
		sum++;		
	printf("����Ϊ��%d",sum);
*/


	//һԪ���η���
/*  double a,b,c;
	double x1,x2,delta,p,q;
	printf("����ϵ��");
	scanf("%lf%lf%lf",&a,&b,&c);
	delta=b*b-4*a*c;
	if(a==0)
	{
		printf("��������");
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