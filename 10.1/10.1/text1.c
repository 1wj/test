#include<stdio.h>
#include<Windows.h>
#include<time.h>

int main()
{
								//ȭ�ʹ���
	

	
	//srand(time(NULL));
    int hp1=100,hp2=100;		//����Ѫ��
	int att1,att2;				//���˹�����
	int i=0;					//�ִ�
	while(hp1>0&&hp2>0)
	{
		
		att1=rand() % 11 + 5 ;		//һ�Ź�����
		att2=rand() % 11 + 5;		//���Ź�����
		
		hp2-=att1;				//һ���ȹ���
		hp1-=att2;
		if(hp1<0||hp2<0){
			printf("��Ϸ����\n");
			
		break;
		}
		
		i++;
		printf("*************************************\n");
		printf("��%d��\n",i);
		printf("һ��Ѫ��Ϊ��%d\t������Ϊ%d\n",hp1,att1);
		printf("����Ѫ��Ϊ��%d\t������Ϊ%d\n",hp2,att2);
		printf("*************************************\n");
		Sleep(500);


	}
}