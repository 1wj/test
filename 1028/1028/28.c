#include<stdio.h>
int bj1(int ,int,int);
int bj2(int,int,int);
int paim(int ,int,int);
//winc++��֪���������n����
int main()
{
	int  i,max=0,min=100,pm,n;
	int cj[4];
	int cj1[4],count=0;
//	int cj[]={10,20,31,40};
//	int cj1[]={10,20,31,40};
	printf("����ÿ�˵Ŀ��Գɼ���");
	for(i=0;i<4;i++)				//��
	{
		scanf("%d",&cj[i]);
		cj1[i]=cj[i];
		count++;
	}
	max=bj1(cj,count,max);					//��
	min=bj2(cj,count,min);			//ע��//��
	printf("���ֵ��%d\n",max);
	printf("��Сֵ��%d\n",min);
	printf("�����Լ��Ŀ��Գɼ���");
	scanf("%d",&n);
	pm=paim(cj1,count,n);			//ע��//��
	printf("�ɼ�������%d",pm);
}
int bj1(int a[],int b,int c)	//���ֵ
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
int bj2(int a[],int b,int c)	//��Сֵ
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
		{								//ð������
			if(b[j]<b[j+1])				//b[]��������ĳɼ�
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}

	}
	for(i=0;i<a;i++)				//����������
	{
		if(p==b[i])
			index=i;
	}
	return index+1;

}