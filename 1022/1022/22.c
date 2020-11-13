
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*  8
int fun(int n)
{
	int num1[20],i=0,max=-1;
	while(n!=1)
	{
		if(n%2==0)
		{
			n=n/2;
			if(max<n)
				max=n;
		}
		else 
		{
			n=3*n+1;
			if(max<n)
				max=n;
		}		
	}
	return max;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("the number is :%d",fun(n));
}

*/



/*  7
double fun(int n )
{
	double sum=0 ,p=1,s=-1;
	int i;
	for(i=1;i<=n;i++)
	{
		p=p*(1.0/i);
		sum=sum+p*s;
		s=-s;
	}
	return sum+1;
}
int main()
{
	int n,k,i;
	double s;
	scanf("%d",&n);
	s=fun(n);
	printf("s=%lf",s);
}
*/


/*  5
float fun(float a)
{
	float x1=0.0,x0;
	do{
	x0=x1;
	x1=cos(x0);
	
	}while(fabs(x0-x1)>=0.000001);
	
		return x1;
	
}
int main ()
{	
	float m=0,f;
	f=fun(m);
	printf("Root=%f\n",f);
	
}
*/

/* 4
double fun(int n )
{
	double sum=0 ,p=1;
	int i;
	for(i=1;i<=n;i++)
	{
		p=p*(1.0/i);
		sum=sum+p;
	}
	return sum+1;
}
int main()
{
	int n,k,i;
	double s;
	scanf("%d",&n);
	s=fun(n);
	printf("s=%lf",s);
}

*/

/*	3
 
void fun(int x,int c[])//c[]是补码
{
	int jie,i,j,m,af[16],a[16];//af反码  a原码
	if(x>0)
	{	
	//	x=abs(x);
			for(i=0;i<=14;i++)
			{
					jie=x%2;
					x=x/2;
					a[i]=jie;				//原码已出
			}	
			j=i-1;
			c[i]=a[15]=0;
			for(i=j;i>=0;i--)
			{
				af[i]=a[i];  //反码
				c[i]=a[i];	//补码
			}

	}
	else
	{
		x=abs(x);
		for(i=0;i<=14;i++)
		{
			jie=x%2;
			x=x/2;		
			a[i]=jie;			//原码已出		
		}
		c[15]=a[15]=1;
		j=i-1;
		for(i=0;i<=j;i++)
		{
			af[i]=1-a[i];		//找到最后一个1
			c[i]=a[i];
			if(c[i]==1)
			{
				i++;
				break;
			}
		}
		for(;i<=j;i++)
		{
			af[i]=1-a[i];		//求出剩下的
			c[i]=1-a[i];		
		}
	}
	
}
int main()
{	
	int a,i,code[16];
	printf("input a:\n");
	scanf("%d",&a);
	fun(a,code);
	for(i=15;i>=0;i--)
	{
		printf("%d",code[i]);
	}
	printf("\n");
}

*/


/*   2
double fun(int n)
{
	//***********Begin***********
	int i,p1=1,s=1;
	double p2=1;
	 double sum=0.0,p;
	for(i=1;i<=n;i++)
	{
		p1=p1*i;
		
		p2=p2*(2*i+1);		
		p=sqrt(1.0*p1/p2);
		sum=sum+p*s;
		s=-s;
	}
	return sum;
	//***********End************
}

int main()
{
	int n;
	double s;
	//FILE *in,*out;
	scanf("%d",&n);
	s=fun(n);
	printf("s=%lf\n",s);
	//***********************
	in=fopen("in83.dat","r");
	out=fopen("out83.dat","w");
	while(!feof(in))
	{
		fscanf(in,"%d\n",&n);
		fprintf(out,"%lf\n",fun(n));
	}
	fclose(in);
	fclose(out);
            system("pause");
	return 0;	
	
}*/
