#include <stdio.h>
#define N 6
int main ()
{
	/*int score[4][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{10,11,12}
	};*/
	int score[4][3];
	int i,j;
	for(i=0;i<4;i++)
	{
		printf("���������ųɼ�");
		for(j=0;j<3;j++)
		{
			
			scanf("%d\t",&score[i][j]);
		}
		printf("\n");
	}
	printf("����\t��ѧ\tӢ��\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",score[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	double powers[5]={42322,45771,40907,41234,40767};
	double deletepower;							//ɾ��������
	double temp;
	int deleteindex=-1;							//ɾ�����ݵ��±�
	int i,j;
	int count=5;
	double insertpower;
/*	printf("������Ҫɾ��������");
	scanf("%lf",&deletepower);					//����Ҫɾ������
	for(i=0;i<count;i++)
	{
		if(deletepower==powers[i])				//����Ҫɾ�����±�
		{
			deleteindex=i;
			break;
		}
	}
	if(deleteindex==-1)
	//if(i=5)
	{
		printf("������˼û�ҵ�");					//�ж��Ƿ��ҵ�
	}
	else
	{
		for(i=deleteindex;i<count-1;i++)
		{
			powers[i]=powers[i+1];				//���±꿪ʼ���渲��ǰ��
		}
		count--;
	}
	printf("ɾ���������Ϊ��\n");
	for(i=0;i<count;i++)
	{
		printf("%.0lf\t",powers[i]);			//������º������
	}
	printf("\n");*/

	//����һ��ս��ֵ
	printf("������һ��Ҫ�����ս��ֵ��");
	scanf("%lf",&insertpower);
	powers[count]=insertpower;
	count++;
	for(i=0;i<count;i++)
	{
		printf("%.0lf\t",powers[i]);			//������º������
	}
	printf("\n");
/*	//��������
	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			if(powers[j]>powers[j+1])
			{
				temp=powers[j];
				powers[j]=powers[j+1];
				powers[j+1]=temp;
			}
		}

	}
	printf("���������飺\n");
	for(i=0;i<count;i++)
	{
		printf("%.0lf\t",powers[i]);
	}


*/




/*	int num[N]={16,25,9,90,23,56};
	int i,temp;
	for(i=0;i<N/2;i++)
	{
		temp=num[i];
		num[i]=num[N-i-1];
		num[N-i-1]=temp;
	}
	printf("����Ϊ\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",num[i]);
	}
*/

/*	int num[N]={16,25,9,90,23};
	int i,j,temp;					//����װ��ʱ����
	for(i=0;i<N-1;i++)				//���ѭ�������ִ�=�������-1
	{
		for(j=0;j<N-1-i;j++)		//�ڲ�ѭ������ÿ�ִ���=�������-1-�ִ�
		{
			if(num[j]<num[j+1])		//���ǰ��һ����С�ں�������ͽ���
			{
				temp=num[j];
				num[j]=num[j+1];	//����ǰ���Լ���Ϊ����
				num[j+1]=temp;			
			}
		}
	}
	printf("����Ϊ:\n");				//�������
	for(i=0;i<N;i++)
	{
		printf("%d\t",num[i]);
	}							//����
   printf("\n");
*/

/*	int score[]={8,4,2,1,23,344,12};
	int i,sum=0;
	double avg;
	int search;		//���ҵ�ֵ
	printf("��������Ԫ��\n");
	for(i=0;i<7;i++)
	{
		printf("%d\t",score[i]);
		sum+=score[i];
	}
	printf("\n");
	avg=sum/7.0;
	printf("��Ϊ��%d\t",sum);
	printf("ƽ��ֵΪ��%lf\n",avg);
	printf("������Ҫ���ҵ�ֵ��");
	scanf("%d",&search);
	for(i=0;i<7;i++)
	{
		if(search==score[i])
		{
			printf("����ôô��\n");
			break;
		}
		
	}
	if(i==7)
	{
		printf("û�ҵ�\n");
	}
*/
}