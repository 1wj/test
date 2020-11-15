#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define M 100
#define C 4 

void fun(char a[]);
int main()
{
	char s[]="****a*bc*def*g****";
	fun(s);
	puts(s);

}

void fun(char a[])
{
	int i=0,j=0,k=0;
	while(a[i]=='*')
		i++;
	while(a[i]!='\0')
	{
		if(a[i]!='*')
		{
			a[k++]=a[i];
		}
		i++;
	}
	a[k]='\0';
}










//求最长字符
//int main()
//{
//	char str[M];
//	int	c[M];
//	int i,count=0;
//	char ch=0;
//	gets(str);
//	for(i=0;i<strlen(str);i++)
//	{
//		if(ch<str[i])
//			ch=str[i];
//	}
//	for(i=0;i<strlen(str);i++)
//	{
//		if(ch==str[i])
//			c[count++]=i;
//	}
//	printf("最大%c  数量%d",ch,count);
//	for(i=0;i<count;i++)
//		printf("\n%d",c[i]);	
//}
















//删除****adfs*d**f***所有*
//void fun(char a[]);
//int main()
//{
//	char s[]="****a*bc*def*g****";
//	fun(s);
//	puts(s);
//
//}
//
//void fun(char a[])
//{
//	int i,j=0,k=0;
//	for(i=0;a[i]=='*';i++)
//		j++;
//	for(j;a[i]!='\0';j++,i++)
//	{
//		if(a[i]!='*')
//		{
//			a[k++]=a[i];
//		}
//	}
//	a[k]='\0';
//}


//void sort(char x[][M],int);
//int main()
//{
//	int i;
//	char a[N][M],t[M];
//	for(i=0;i<N;i++)
//		scanf("%s",a[i]);
//	sort(a,N);
//	for(i=0;i<N;i++)
//	{
//		printf("%s",a[i]);
//		
//	}
//	printf("\n");
//}
//
//void sort(char x[][M],int n)
//{
//	char t[M];
//	int i,j;
//	for(i=0;i<n-1;i++)
//	{
//		for(j=0;j<n-1-i;j++)
//		{
//			if(strcmp(x[j],x[j+1])<0)
//			{
//				strcpy(t,x[j]);
//				strcpy(x[j],x[j+1]);
//				strcpy(x[j+1],t);
//			}
//		}
//	}
//}

//旋转矩阵
//int main()
//{
//	int i,j,a[N][N],b[N][N];
//	for(i=0;i<N;i++)
//	{
//		for(j=0;j<N;j++)
//			scanf("%d",&a[i][j]);
//	}
//	for(i=0;i<N;i++)
//	{
//		for(j=0;j<N;j++)		//顺时针旋转90度
//		b[i][j]=a[N-1-j][i];
//	}
//	for(i=0;i<N;i++)
//	{
//		for(j=0;j<N;j++)
//		b[i][j]=a[j][N-1-i];		//逆时针旋转90度
//	}
//	for(i=0;i<N;i++)
//	{
//		for(j=0;j<N;j++)
//			printf("%d",b[i][j]);
//		printf("\n");
//	}
//}







//查找相同字串的数目
//int count(char[],char[]);
//int main()
//{
//	char a[80],b[10];
//	int k;
//	gets(a);
//	gets(b);
//	k=count(a,b);
//	if(k==0)
//		printf("没有找到");
//	else
//		printf("%d\n",k);
//}
//int count(char s[],char t[])
//{
//	int i,j,k,m=0;
//	for(i=0;s[i]!='\0';i++)
//	{
//		k=0;
//		for(j=i;s[j]==t[k]&&k<strlen(t);j++)
//			k++;
//		if(t[k]=='\0')
//			m++;
//	}
//
//	return m;
//}




//判断筛子每个面的概率
//#define N 60000

//int main()
//{
//
//
//	
//	int ludo[6]={0};
//	int i;
//	srand(time(NULL));
//	for(i=0;i<N;i++)
//		ludo[rand()%6]++;
//	for(i=0;i<6;i++)
//		printf("第%d面的个数%d,出现概率%8.4f\n",i+1,ludo[i],(double)ludo[i]/N);
//}


//判断有几个词组
//int main()
//{
//	char str[81];
//	int i=0 ,num=0,word=0;
//	char c;
//	c=getchar();
//	while((str[i++]=getchar())!='\n')		//循环录入进入数组
//		str[i]='\0';
//	/*gets(str);*/
//		for(i=0;(c=str[i])!='\0';i++)
//		{
//			if(c==' ')
//				word=0;
//			else if(word==0)
//			{
//				word=1;
//				num++;
//			}
//		
//		}	
//		printf("%d\n",num);
//
//}
	
	
