#include<stdio.h>
int main()
{
	int num1[5];
	int num2[3];
	int count1=5,count2=3;
	//int s=sizeof(num1)/sizeof(num1[0]);
	int i;
	for(i=0;i<count1;i++)
	{
		printf("��������1�������%d���֣�",i+1);		
		scanf(" %d",&num1[i]);
	}
	
	for(i=0;i<count2;i++)
	{
		printf("��������2�������%d���֣�",i+1);		
		scanf(" %d",&num2[i]);
	}	
	for(i=count1;i<8;i++)
	{
		
			num1[i]=num2[i-5];
			
	}	
	count1+=3;
	for(i=0;i<count1;i++)
	{
		printf("%d\t",num1[i]);
		
	}
	printf("���ȣ�%d",s);

	
/*//¼������	
	char sz[8];
	//={'a','j','c','n','i','y','d','u'}
	int i,length=8;
	char insert;
	for(i=0;i<8;i++)
	{
		printf("�������%d��ĸ��",i+1);		
		scanf(" %c",&sz[i]);
	}
	printf("����Ϊ��\n");
	for(i=0;i<length;i++)
	{
		printf("%c",sz[i]);
	}
	printf("\n");
	length++;
	fflush(stdin);								//���
//������
	printf("������Ҫ������ַ���");
	
	scanf("%c",&insert);
	
	for(i=length;i>2;i--)
	{
		sz[i]=sz[i-1];
	}
	
	sz[2]=insert;
	printf("����������Ϊ��\n");
	for(i=0;i<length;i++)
	{
		printf("%c",sz[i]);
	}
	printf("\n");
	fflush(stdin);								//���
//ɾ����	
	for(i=2;i<length;i++)
	{
		sz[i]=sz[i+1];
	}
	length--;
	printf("ɾ���������Ԫ��\n");
	for(i=0;i<length;i++)
	{
		printf("%c",sz[i]);
	}
	printf("\n");
												//���
*/
											
}