#include<stdio.h>
#include<math.h>
#include<string.h>
/* ������arr2���Ƶ�arr1��
//һ���ӡʱ����\0��ֹͣ�� ����Ĳ����ӡ���԰�1���Ƶ�2��2����ľͱ���ֹ��
int main(){
	char arr1[]={"bit"};
	char arr2[20]={'a','w'};
	strcpy(arr2, arr1);
	printf("%c",arr2);

}

*/
//�޸��ڴ��ַ 
/*
int main()
{
	char arr[]="hello world";
	memset(arr,'1',3);			 //����ַ���ĳ�ʲô���ļ�����
	printf("%s",arr);
}
*/



/*
int print(int num)
{
	if(num==1)
		return 1;
	else if(num==2)
		return 2;
	else
	 return num=print(num-1)+print(num-2);
}
int main()
{
	int n,s=1;
	double p=0;
	scanf("%d",&n);

	p=print(n);
	if(n%2==0)
	s=-s;
	printf("%d/%.0lf",s,p);
}	

*/



/*
int main()
	{
	

		int i,a=1,b=2,n,s=1;
		double sum=0;
		
		printf("�����");
		scanf("%d",&n);
		//sum=1.0/p1+1.0/p2;
		if(n==1)
		{
			printf("1/%d\n",a);
		}
		else if(n==2)
		{
		printf("-1/%d\n",b);
		}
		else
		{
			for(i=3;i<=n;i++)
			{
				b=b+a;
				//sum=s*1.0/(b);
				sum=b;
				a=b-a;
				s=-s;
			
			}
		
			printf("%d/%.0lf\n",-s,sum);
			//printf("%d",b);
		}
	}
	*/