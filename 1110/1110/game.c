
#include<stdio.h>
#include "game.h"
//��ʼ��
void InitBoard( char board[3][3],int row,int col)			//��ʼ��
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
//��ӡ
void  DisplayBoard (char board[3][3],int row,int col)	//
{
	int i,j;
	for(i=0;i<row;i++)
	{
		//1.��ӡ����
		for(j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<(col-1))	
				printf("|");
			
		}
		printf("\n");
		//2.��ӡ�ָ���
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
//�������
void PlayerMove(char board[3][3],int row,int col)
{
	int x=0,y=0;
	while(1)
	{
		printf("�������\n");
		printf("���������꣺");
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
				printf("�����걻ռ��");
			}
		}
		else 
		{
			printf("�����������\n");
		}
	}
}
//��������
void ComputerMove(char board[3][3],int row,int col)
{
	printf("��������\n");
	
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
				return 0;//����
		}
	}
	return 1;//û��
}
char IsWin(char board[3][3],int row,int  col)
{
	//��
	int i;
	for(i=0;i<row;i++)
	{
		if(board[i][0]==board[i][1] && board[i][2]==board[i][1] && board[i][2]!=' ')
		return board[i][0];
	}
	//��
	for(i=0;i<col;i++)
	{
		if(board[0][i]==board[1][i] && board[2][i]==board[1][i] && board[0][i]!=' ')
		return board[0][i];		
	}
	//�����Խ���
	if(board[0][0]==board[1][1] && board[2][2]==board[1][1] && board[2][2]!=' ' )
		return board[0][0];
	if(board[2][0]==board[1][1] && board[0][2]==board[1][1] && board[0][2]!=' ' )
		return board[1][1];
	//�ж��Ƿ�ƽ�� 1������ 0��û��
	if(isFull(board,3,3)==1)
	{	
		return 'q';
	}
	return 'C';
	
}