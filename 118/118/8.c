#include<stdio.h>

#include<math.h>
void fun(int n);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=",n);
	if(n<0)
		printf("-");
	n=abs(n);
	fun(n);
	return 0;
	
}
void fun(int n)
{
	int k,r;
	for(k=2;k<=sqrt((double)n);k++)
	{
		r=n%k;
		while(!r)
		{
			printf("%d",k);
			n=n/k;
			if(n>1)
				printf("*");
			r=n%k;
		}
	}
		if(n!=1)
			printf("%d\n",n);
	
}























//����С������
//int gcd(int x,int y);
//int hcd(int x, int y,int z);
//int main()
//{
//	int a,b,g,h;
//	scanf("%d%d",&a,&b);
//	if(a==0||b==0)
//	{
//		printf("��������");
//		exit(1);
//	}
//	g=gcd(a,b);
//	h=hcd(a,b,g);
//	printf("��С������Ϊ��%d",h);
//	return 0;
//}
//int gcd(int x,int y)
//{
//	int r;
//	do
//	{
//	 r=x%y;
//	 x=y;
//	 y=r;
//	}while(r!=0);
//
//	return x;
//}
//int hcd(int x, int y,int z)
//{
//	return x*y/z;
//}




 //�жϾ��Է�λ��
// int prime(unsigned int);
// unsigned int rev(int);
//int main()
//{	
//	unsigned int n,m;
//	
//	scanf("%u", &n);
//	if(prime(n)!=0)
//	{m=rev(n);}
//	else
//	{
//		printf("�������%u��������\n",n);
//		return 0;
//	}
//
//
//	if(prime(m)!=0)
//			printf("�������%u�Ǿ�������\n",n);
//	else
//		printf("�������%u���Ǿ�������\n",n);
//	return 0;
//}
///*�ж������Ķ���*/
//int prime(unsigned int x)
//{
//	int i,k;
//	k=sqrt((double)x);
//	for(i=2;i<=k;i++)
//	{
//		if(x%i==0)
//			return 0;
//		else if(i>k)
//			return 1;
//	}
//}
///*��λ���ĺ�������*/
//unsigned int rev( unsigned int y)
//{
//	unsigned int z=0;
//	while(y!=0)
//	{
//		z=z*10+y%10;
//		y=y/10;
//	}
//	return z;
//}

  