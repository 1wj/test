#include<stdio.h>
int bj1(int ,int,int);
int bj2(int,int,int);
int paim(int ,int,int);
//winc++不知道如何输入n个数
int main()
{
	int  i,max=0,min=100,pm,n;
	int cj[4];
	int cj1[4],count=0;
//	int cj[]={10,20,31,40};
//	int cj1[]={10,20,31,40};
	printf("输入每人的考试成绩：");
	for(i=0;i<4;i++)				//改
	{
		scanf("%d",&cj[i]);
		cj1[i]=cj[i];
		count++;
	}
	max=bj1(cj,count,max);					//改
	min=bj2(cj,count,min);			//注意//改
	printf("最大值：%d\n",max);
	printf("最小值：%d\n",min);
	printf("输入自己的考试成绩：");
	scanf("%d",&n);
	pm=paim(cj1,count,n);			//注意//改
	printf("成绩排名：%d",pm);
}
int bj1(int a[],int b,int c)	//最大值
{
	int i;
	for(i=0;i<b;i++)
	{
		if(a[i]>c) 
		{
			c=a[i]	;
		};
	}
	return c;
}
int bj2(int a[],int b,int c)	//最小值
{
	int i;
	for(i=0;i<b;i++)
	{
		if(a[i]<c)
		{ 
			c=a[i];
		}
	}
	return c;
}
int paim(int b[],int a ,int p)
{
	int i,j,t,index=-1;
	for(i=0;i<a-1;i++)
	{
		for(j=0;j<a-1-i;j++)
		{								//冒泡排序
			if(b[j]<b[j+1])				//b[]是排完序的成绩
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}

	}
	for(i=0;i<a;i++)				//求排名的数
	{
		if(p==b[i])
			index=i;
	}
	return index+1;

}