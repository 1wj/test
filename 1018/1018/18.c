#include<stdio.h>
int main(){
	int i,j,k;
	int a[16], af[16], ab[16];//af存储反码，ab存储补码第0位为符bai号位
	char b[16];
	scanf("%s", b);
//原码
	for(i = 0; b[i] != '\0'; i++)
	{
	a[i] = b[i] - '0';//?可以不减吗？
	//或者是把字符形式化为整数形式
	} 

	j = i-1;
	ab[0] = af[0] = a[0];//符号位始终不变
	if(a[0] == 1)
	{
		//当从du屏zhi幕输入的是负数，则作相应变换
		for(i = j; i > 0; i--)
		{
			af[i] = 1 - a[i];
			ab[i] = a[i];
			if(a[i] == 1)
			{
			i--;
			break;
			}
		}
			k = i;
		for(; i > 0; i--)
		af[i] = 1 - a[i];		//反码以出


		for(i = k; i > 0; i--)//补码从末位数起第一dao个不为0，以后均取反
		ab[i] = 1 - a[i];
	}
	else
	{//如果是正数，则全部复制
		for(i = j; i > 0; i--)
		{//正数反码、补码都与原码相同
		af[i] = a[i];
		ab[i] = a[i];
		}
	}
	printf("对应的反码是：\n");
	for(i = 0; i <= j; i++)
	printf("%d", af[i]);
	printf("\n");
	printf("对应的补码是：\n");
	for(i = 0; i <= j; i++)
	printf("%d", ab[i]);
}



/*#include<stdio.h>
#include<math.h>
int main(){
	int i,n=10,p3,jie,m;
	 double p2=1.0;
	 scanf("%d",&m);
	 for(i=0;i<=14;i++)
		{
			jie=m%2;
			jie=jie;
			m=m/2;
			printf("%d",jie);
	 }

}
*/
	 /*
for(i=1;i<=n;i++)
	{
		//p1=p1*i;
	//	p2=p2*(2*i+1);
		p2=p2*(2*i+1);
	//	p=sqrt(1.0*p1/p2);
	//	sum=sum+p*s;
	//	s=-s;
		p3=1%2;
		printf("%lf \n",p2);
		printf("%d ",p3);
	}

}
*/


		//输入n和a 求前n项和
/*
double hehe(int,int);
int main()
{
	int a,n;
	double s=0.0;
	printf("输入a\tn\n");
	scanf("%d%d",&a,&n);
	s=hehe(a,n);
	printf("%lf",s);

}
double hehe(int x,int y)
{
	int i,s=1;
	double sum=0,p,q=0;
	for(i=1;i<=y;i++)
	{
		q=q*10+y;
		p=i/q;
		sum=sum+p*s;
		s=-s;
	}
	return sum;
}


*/


	//前n项和（利用函数）
/*
double he(int);

int main()
{
	int n; 
	double s=0.0;
	printf("输个n\n");
	scanf("%d",&n);
	s=he(n);
	printf("%lf",s);

}
double he(int a)
{
	int i;
	double p=1.0/2,sum=-1,s=1;
	if(a==1)
		return -1;
	else
	{
		for(i=2;i<=a;i++)
		{
			p=p*(1.0/(2*i));	
			
			 sum=sum+p*s;
			 s=-s;
		}
		return sum;
	}

}
*/
		//n个数内求素数之和
/*
double sushu(int);						
int main()
{
	int p=1,n;
	double s;
	printf("输入n\n");
	scanf("%d",&n);
	s=sushu(n);
	printf("%lf",s);

}

 double sushu(int a)
 {

	int i,j,q,flag,f=-1,count=0;
	double sum=0.0,p;
	//
	for(j=2;j<=a;j++)
	{
		q=sqrt((double)j);
		flag=1;
		for(i=2;i<=q;i++)
		{
			if(j%i==0)
			{
				flag=0;
				break;
			}
			
		}
	
		if(flag==1&&j>=2)
		{	
			count++;
			p=1.0*count/j*f;
			sum=sum+p;
			f=-f;
			
		}
		
	 }
	return sum;
 }

 */


			//指针

/*int main()
{
	int num=999;
	int * str_num;
	str_num=&num;
	int *str_num2=str_num;
	
	printf("num值为%d\n",num);
	printf("num地址为%p\n",str_num);
	*str_num=123;
	printf("num值为%d\n",num);
	printf("num地址为%p\n",str_num);
}*/