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










//����ַ�
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
//	printf("���%c  ����%d",ch,count);
//	for(i=0;i<count;i++)
//		printf("\n%d",c[i]);	
//}
















//ɾ��****adfs*d**f***����*
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

//��ת����
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
//		for(j=0;j<N;j++)		//˳ʱ����ת90��
//		b[i][j]=a[N-1-j][i];
//	}
//	for(i=0;i<N;i++)
//	{
//		for(j=0;j<N;j++)
//		b[i][j]=a[j][N-1-i];		//��ʱ����ת90��
//	}
//	for(i=0;i<N;i++)
//	{
//		for(j=0;j<N;j++)
//			printf("%d",b[i][j]);
//		printf("\n");
//	}
//}







//������ͬ�ִ�����Ŀ
//int count(char[],char[]);
//int main()
//{
//	char a[80],b[10];
//	int k;
//	gets(a);
//	gets(b);
//	k=count(a,b);
//	if(k==0)
//		printf("û���ҵ�");
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




//�ж�ɸ��ÿ����ĸ���
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
//		printf("��%d��ĸ���%d,���ָ���%8.4f\n",i+1,ludo[i],(double)ludo[i]/N);
//}


//�ж��м�������
//int main()
//{
//	char str[81];
//	int i=0 ,num=0,word=0;
//	char c;
//	c=getchar();
//	while((str[i++]=getchar())!='\n')		//ѭ��¼���������
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
	
	
