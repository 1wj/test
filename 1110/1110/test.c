#include "game.h"
//��������Ϸ



//��Ϸ��ʵ��
 void game()
{
	char ret=0;
	char board[3][3];
	//��ʼ��
	InitBoard(board,3,3);
	//��ӡ����
	DisplayBoard(board,3,3);
	
	while(1)
	{
		//�������
		PlayerMove(board,3,3);
		DisplayBoard(board,3,3);
		//�ж�
		IsWin(board,3,3);
		ret=IsWin(board,3,3);
		if(ret!='C')
			break;

		//��������
		ComputerMove(board,3,3);
		DisplayBoard(board,3,3);
		ret=IsWin(board,3,3);
		if(ret!='C')
			break;
	}
	if(ret=='*')
		printf("���Ӯ\n");
	else if(ret=='#')
		printf("����Ӯ\n");
	else 
		printf("ƽ��\n");
}

void menu()
{
	
		
		printf("************************\n");
		printf("***1.��ʼ****0.�˳�******\n");
		printf("************************\n");
		
	
}
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("���������֣�");
		scanf("%d",&input);
		switch(input)
		{
			case 1: 
				printf("������\n");
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	}while(input);
}
int main()
{
	test();
}