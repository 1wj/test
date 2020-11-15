#include<stdio.h>
void sort(int [][2],int );
int main()
{
	int b[51][2]={{0,0}};
	int i=0;
	int j=0;
	int flag=1;
	int number=0;
	int x[10]={0};
	while(flag)
	{
		for(i;i<10;i++)
		{
			scanf("%d",&x[i]);
			if(x[i]==-1)
			{
				flag=0;
				break;
			}
			b[x[i]][0]=x[i];	//编号
			b[x[i]][1]++;		//票数
		}
	}
	printf("排序前的数据：\n");
	for(i=1;i<51;i++)				//注意50还是51
	{
		if(b[i][0]>0)
		printf("编号: %d\t票数：%d\n",b[i][0],b[i][1]);
	}
		
	sort(b,51);

	printf("排序后的数据：\n");
	for(i=1;i<11;i++)					//注意10还是11 1还是0				?
		printf("编号: %d\t票数：%d\n",b[i][0],b[i][1]);
	printf("\n");
	printf("输入候选人编号");
	scanf("%d",&number);
	while(number!=-1)
	{
		for(j=1;j<51;j++)
		{
			if(number==b[j][0])
				break;
		}
						
		printf("编号: %d\t票数：%d\n",b[j][0],b[j][1]);
		printf("输入候选人编号");
		scanf("%d",&number);
	}
}
void sort(int x[][2],int n){		//一维数组【】里面不能加数字 但二维数组第二个里面可以加数字
	int i,j,k;
	for(i=1;i<n-1;i++)
	{
		for(j=1;j<n-1-i;j++)		//把二维当成两个一维排序排两次每一列是一次
		{
			if(x[j][1]<x[j+1][1])
			{
				//换编号
				k=x[j][0];
				x[j][0]=x[j+1][0];
				x[j+1][0]=k;
				//换票数
				k=x[j][1];
				x[j][1]=x[j+1][1];
				x[j+1][1]=k;
			}
		}
	}

}

//矩阵运算
/*
#define N 4
#define M 3
void add(int a[M][N],int b[M][N],int c[M][N]);
void transpose(int a[M][N],int b[N][M]);
void product(int a[M][N],int b[N][M],int r[M][M]);
int main()
{
	int x[M][N],y[M][N],z[M][N],s[N][M],t[M][M];
	int i,j;
	printf("a:\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			scanf("%d",&x[i][j]);
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			scanf("%d",&y[i][j]);
	}	
	add(x,y,z);
	transpose(x,s);
	product(x,s,t);

	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			printf("%5d",z[i][j]);
		printf("\n");
	}	
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			printf("%5d",s[i][j]);
		printf("\n");
	}	
	for(i=0;i<M;i++)
	{
		for(j=0;j<M;j++)
			printf("%5d",t[i][j]);
		printf("\n");
	}		
}
//加法
void add(int a[M][N],int b[M][N],int c[M][N])
{
	int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			c[i][j]=a[i][j]+b[i][j];
	}
	
}
//转置
void transpose(int a[M][N],int b[N][M])
{
	int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			b[j][i]=a[i][j];
	}
}
//乘积
void product(int a[M][N],int b[N][M],int r[M][M])
{
	int i,j;
	int k=0;
	for(i=0;i<M;i++)
	{
		for(j=0;j<M;j++)
			r[i][j]=0;
	}
	for(i=0;i<M;i++)
	{
		for(k=0;k<M;k++)
			for(j=0;j<N;j++)
				r[i][k]+=a[i][j]*b[j][k];
	}
}
*/

//归并
/*
void sort(int [],int );
void merge(int [],int[],int[],int,int);
int main()
{
	int i;
	int a[N]={98,64,75,91,55};
	int b[M]={90,58,84,61};
	int c[M+N];
	printf("数组排序前:\n");
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	printf("\n");

	printf("数组排序前:\n");
	for(i=0;i<M;i++)
		printf("%5d",b[i]);
	printf("\n");
	
	printf("数组排序后:\n");
	sort(a,N);
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	printf("\n");

	printf("数组排序后:\n");
	sort(b,M);
	for(i=0;i<M;i++)
		printf("%5d",b[i]);
	printf("\n");
	merge(a,b,c,N,M);
	printf("数组合并后:\n");

	for(i=0;i<M+N;i++)
		printf("%5d",c[i]);

}

void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j+1]>a[j])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
}
void merge(int a[],int b[],int c[],int n,int k)
{
	int ia=0,ib=0,ic=0;
	while(ia<n && ib<k)
	{
		if(a[ia]<=b[ib])
		c[ic++]=b[ib++];
		else
		c[ic++]=a[ia++];
	}
	while(ia<n)
	{
		c[ic++]=a[ia++];
	}
	while(ib<k)
	{
		c[ic++]=b[ib++];
	}
}
-*/