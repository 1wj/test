#include "game.h"
//三子棋游戏



//游戏的实现
 void game()
{
	char ret=0;
	char board[3][3];
	//初始化
	InitBoard(board,3,3);
	//打印棋盘
	DisplayBoard(board,3,3);
	
	while(1)
	{
		//玩家下棋
		PlayerMove(board,3,3);
		DisplayBoard(board,3,3);
		//判断
		IsWin(board,3,3);
		ret=IsWin(board,3,3);
		if(ret!='C')
			break;

		//电脑下棋
		ComputerMove(board,3,3);
		DisplayBoard(board,3,3);
		ret=IsWin(board,3,3);
		if(ret!='C')
			break;
	}
	if(ret=='*')
		printf("玩家赢\n");
	else if(ret=='#')
		printf("电脑赢\n");
	else 
		printf("平局\n");
}

void menu()
{
	
		
		printf("************************\n");
		printf("***1.开始****0.退出******\n");
		printf("************************\n");
		
	
}
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请输入数字：");
		scanf("%d",&input);
		switch(input)
		{
			case 1: 
				printf("三子棋\n");
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}
	}while(input);
}
int main()
{
	test();
}