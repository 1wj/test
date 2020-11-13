#define ROW 3;
#define COL 3;

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void InitBoard(char board[3][3],int  ,int );
void  DisplayBoard (char board[3][3],int row,int col);
void PlayerMove(char board[3][3],int row,int col);
void ComputerMove(char board[3][3] ,int ,int );

//玩家赢 *
//电脑赢 #
//平局 q
//继续 C
char IsWin(char board[3][3],int ,int );