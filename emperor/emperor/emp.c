#include<stdio.h>
#include<Windows.h>
#include<mmsystem.h>
#include<string.h>
#pragma comment(lib, "Winmm.lib")
#define MAX 6
int main(){
	char emperorname[20];			//�ʵ�����
	char temp[20];					//���Ƶ�����
	char name[MAX][20]={"����","����","��֪����","��ʩ","���¸�"};	//��������
	int  level[]  =  {1,       2,      0,        0,     0,    -1};	//
	int loves[]={100,100,100,100,100,-1};
	int index=-1;
	int temp2;

	char levelname[5][10]={"����","����","����","�ʹ���","�ʺ�"};
	

	int i,j,choice;
	int count=5;
	
	printf("*********************************************************\n");
	printf("���Դ��룺��ǰ���ӵļ��\n");
	printf("%-12s\t����\t�øж�\n","����");
	for(i=0;i<count;i++)
	{
		printf("%-12s\t%s\t%d\n",name[i],levelname[level[i]],loves[i]);
	}
	printf("*********************************************************\n");

	
	printf("�����뵱ǰ�ʵ����ţ�");
	scanf("%s",emperorname);								//¼���ַ�������Ҫ&����
	printf("��ӭ%s���٣��������࣬�����˳�\n",emperorname);	//�����÷�
	printf("1���ʵ���ּѡ����\t�����ӹ��ܣ�\n");
	printf("2�����Ƴ�����\t\t���޸�״̬���ܣ�\n");
	printf("3�������乬��\t\t��ɾ�����ܣ�\n");
	printf("4�������ټ�����ȥС������������£�\n");
	
	printf("������ѡ��");
	scanf("%d",&choice);
	switch(choice)
	{	
		case 1 : 
			
			if(count<MAX)					//�ж��Ƿ�����
				 {
					printf("����������������");
					scanf("%s",name[count]);
					level[count]=0;				//��ʼ���ȼ�
					loves[count]=100;			//��ʼ���øж�
					count++;					//��������
				 }
				 else
				 {
					printf("����ע�����尡������ʧ��\n");
				 }
			
			break;
		case 2 : printf("�����뷭�Ƶ��������ƣ�");
				 scanf("%s",temp);
				
						 for(i=0;i<count;i++)
						 { 
							if(strcmp(temp,name[i])==0)
							{
								index=i;
								loves[i]+=10;
								level[i] = level[i]>=4?4:level[i]+1;
							}
							else
							{
								loves[i]-=10;
							}
		
						 }
						 if(index==-1)
						 {
							printf("����û�д���\n");
						 }
						 
			 
			break;
		case 3 : printf("����������乬���������ƣ�");
				 scanf("%s",temp);
				 for(i=0;i<count;i++)
				 {
					if(strcmp(temp,name[i])==0)
					{
						index=i;
						break;
					}
				 }
				 if(index==-1)
				 {
					printf("���޴���");
				 }
				 else
				 {
					for(i=index;i<count-1;i++)
					{
						strcpy(name[i],name[i+1]);
						level[i]=level[i]+1;
						loves[i]=loves[i]+1;
						
					}
					count--;

				 }
			break;
		case 4 : printf("4�������ټ�����ȥС������������£�\n");
			break;
		default: printf("����ѡ\n");
			break;
	}
		for(i=0;i<count-1;i++)
		{
			for(j=0;j<count-i-1;j++)
			{
				if(level[j]<level[j+1])
				{
					temp2=loves[j];
					loves[j]=loves[j+1];
					loves[j+1]=temp2;

					temp2=level[j];
					level[j]=level[j+1];
					level[j+1]=temp2;

					strcpy(temp,name[j]);
					strcpy(name[j],name[j+1]);
					strcpy(name[j+1],temp);
				}
			}
		}
	printf("*********************************************************\n");
	printf("���Դ��룺��ǰ���ӵļ��\n");
	printf("%-12s\t����\t�øж�\n","����");
	for(i=0;i<count;i++)
	{
		printf("%-12s\t%s\t%d\n",name[i],levelname[level[i]],loves[i]);
	}
	printf("*********************************************************\n");



















/*PlaySound(TEXT("sounds\\����.wav"),
	NULL,SND_FILENAME | SND_SYNC | SND_LOOP);*/
return 0;
}