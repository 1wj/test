
#include<stdio.h>
#include "game.h"
//初始化
void InitBoard( char board[3][3],int row,int col)			//初始化
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			board[i][j]=' ';

		}
	}
}
//打印
void  DisplayBoard (char board[3][3],int row,int col)	//
{
	int i,j;
	for(i=0;i<row;i++)
	{
		//1.打印数据
		for(j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<(col-1))	
				printf("|");
			
		}
		printf("\n");
		//2.打印分割行
		if(i<row-1)
		{
			for(j=0;j<col;j++)
			{
				printf("---");
				if(j<(col-1))	
					printf("|");
			}
			
		}
		printf("\n");

	}
}
//玩家下棋
void PlayerMove(char board[3][3],int row,int col)
{
	int x=0,y=0;
	while(1)
	{
		printf("玩家下棋\n");
		printf("请输入坐标：");
		scanf("%d%d",&x,&y);
		if(x>0 && x<=row && y>0 && y<=col)		
		{
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]='*';
				break;
			}
			else
			{
				printf("该坐标被占用");
			}
		}
		else 
		{
			printf("坐标输入错误\n");
		}
	}
}
//电脑下棋
void ComputerMove(char board[3][3],int row,int col)
{
	printf("电脑下棋\n");
	
	while(1)
	{
		int x=0;
		int y=0;
		x=rand()%row;
		y=rand()%row;
		if(x>=0 && x<row && y>=0 && y<col)
		{
			if(board[x][y]==' ')
			{
				board[x][y]='#';
				break;
			}
		}
	}

}
 int isFull(char board[3][3],int row,int  col)
{
	int j=0;
	int i=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
				return 0;//满了
		}
	}
	return 1;//没满
}
char IsWin(char board[3][3],int row,int  col)
{
	//行
	int i;
	for(i=0;i<row;i++)
	{
		if(board[i][0]==board[i][1] && board[i][2]==board[i][1] && board[i][2]!=' ')
		return board[i][0];
	}
	//列
	for(i=0;i<col;i++)
	{
		if(board[0][i]==board[1][i] && board[2][i]==board[1][i] && board[0][i]!=' ')
		return board[0][i];		
	}
	//两个对角线
	if(board[0][0]==board[1][1] && board[2][2]==board[1][1] && board[2][2]!=' ' )
		return board[0][0];
	if(board[2][0]==board[1][1] && board[0][2]==board[1][1] && board[0][2]!=' ' )
		return board[1][1];
	//判断是否平局 1是满了 0是没满
	if(isFull(board,3,3)==1)
	{	
		return 'q';
	}
	return 'C';
	
}