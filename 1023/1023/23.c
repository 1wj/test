#include<stdio.h>
int main()

	
{
	int a[16],af[16],ab[16];
	char b[16];
	int i,j,k;
	printf("����һ����\n");
	scanf("%s",b);
	for(i=0;b[i]!='\0';i++)
	{
		a[i]=b[i]-'0';
		//printf("%d",a[i]);	ԭ��
	}
	af[0]=ab[0]=a[0];		//����λ
	j=i-1;					//j=6,i=7
	
	if(a[0]==1)
	{
		for(i=j;i>0;i--)
		{
			af[i]=1-a[i];
			ab[i]=a[i];
			if(ab[i]==1)   //�ҵ����һ��1
			{
				
				//ab[i]=1-a[i];
				i--;
				break;
			}

		}
		k=i;
		// ���ʣ�෴��
		for(i;i>0;i--)
		{
			af[i]=1-a[i];
			//ab[i]=1-a[i];
		}
		//���1�Ժ�Ĳ���
		for(i=k;i>0;i--)
		{
			ab[i]=1-a[i];
			
		}


	}
	else
	{	
		for(i=j;i>0;i++)
		{
			ab[i]=a[i];
			af[i]=a[i];
		}
	}
	printf("ԭ��\n");
	for(i=0;i<=j;i++)
	{	
	printf("%d",a[i]);
	}
	printf("\n");

	printf("����\n");
	for(i=0;i<=j;i++)
	{
	printf("%d",af[i]);
	}
	printf("\n");

	printf("����\n");
	for(i=0;i<=j;i++)
	{
	printf("%d",ab[i]);
	}
	printf("\n");

}