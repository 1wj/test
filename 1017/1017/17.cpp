#include<stdio.h>
int Fib(int num)
{
	if(num==0)
		return 0;
	else if(num==1)	
		return 1;
	else
	{
		return num=Fib(num-1)+Fib(num-2);		
	}
}
int main()
{
	int n,p=0;
	printf("�������n���� ");
	scanf("%d",&n);
	p=Fib(n);
	printf("��%d����ֵΪ%d\n",n,p);
}







//�õݹ�����n�Ľ׳�
/*int Fact(int num)
{
	int p=0;
	if(num==1)
		return 1;
	else
	{
		 p=num*Fact(num-1);
		 return p;
	}
}
int main()
{
	int n,p=0;
	printf("����һ����");
	scanf("%d",&n);
	p=Fact(n);
	printf("%d�Ľ׳�Ϊ%d\n",n,p);
}

*/




//�õݹ�����ַ�������
	//�ܴ�����ʱ����
/*int my_str(char* str)
{
	int count=0;
	while(*str != '\0')
	{
		count++;
		*str++;
	}
	return count;
	*/
	//��������ʱ����
/*	if(*str!='\0')
	{
		return 1+my_str(str+1);
	}
	else
	return 0;

}

int main()
{
	char arr[]="bit";
	int len=my_str(arr);
	printf("len=%d\n",len);

}
*/




//�õݹ��ӡ1234

/*void print(int n)
{
	if(n>9)
	{
		//n=n/10;
		print(n/10);
		//return n;
	}
	printf(" %d",n%10);
}

int main()
{
	int num=0;
	 printf("����һ����");
	 scanf("%d",&num);
	 print(num);
	 return 0;
}*/