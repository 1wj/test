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
			b[x[i]][0]=x[i];	//���
			b[x[i]][1]++;		//Ʊ��
		}
	}
	printf("����ǰ�����ݣ�\n");
	for(i=1;i<51;i++)				//ע��50����51
	{
		if(b[i][0]>0)
		printf("���: %d\tƱ����%d\n",b[i][0],b[i][1]);
	}
		
	sort(b,51);

	printf("���������ݣ�\n");
	for(i=1;i<11;i++)					//ע��10����11 1����0				?
		printf("���: %d\tƱ����%d\n",b[i][0],b[i][1]);
	printf("\n");
	printf("�����ѡ�˱��");
	scanf("%d",&number);
	while(number!=-1)
	{
		for(j=1;j<51;j++)
		{
			if(number==b[j][0])
				break;
		}
						
		printf("���: %d\tƱ����%d\n",b[j][0],b[j][1]);
		printf("�����ѡ�˱��");
		scanf("%d",&number);
	}
}
void sort(int x[][2],int n){		//һά���顾�����治�ܼ����� ����ά����ڶ���������Լ�����
	int i,j,k;
	for(i=1;i<n-1;i++)
	{
		for(j=1;j<n-1-i;j++)		//�Ѷ�ά��������һά����������ÿһ����һ��
		{
			if(x[j][1]<x[j+1][1])
			{
				//�����
				k=x[j][0];
				x[j][0]=x[j+1][0];
				x[j+1][0]=k;
				//��Ʊ��
				k=x[j][1];
				x[j][1]=x[j+1][1];
				x[j+1][1]=k;
			}
		}
	}

}

//��������
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
//�ӷ�
void add(int a[M][N],int b[M][N],int c[M][N])
{
	int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			c[i][j]=a[i][j]+b[i][j];
	}
	
}
//ת��
void transpose(int a[M][N],int b[N][M])
{
	int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			b[j][i]=a[i][j];
	}
}
//�˻�
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

//�鲢
/*
void sort(int [],int );
void merge(int [],int[],int[],int,int);
int main()
{
	int i;
	int a[N]={98,64,75,91,55};
	int b[M]={90,58,84,61};
	int c[M+N];
	printf("��������ǰ:\n");
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	printf("\n");

	printf("��������ǰ:\n");
	for(i=0;i<M;i++)
		printf("%5d",b[i]);
	printf("\n");
	
	printf("���������:\n");
	sort(a,N);
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	printf("\n");

	printf("���������:\n");
	sort(b,M);
	for(i=0;i<M;i++)
		printf("%5d",b[i]);
	printf("\n");
	merge(a,b,c,N,M);
	printf("����ϲ���:\n");

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