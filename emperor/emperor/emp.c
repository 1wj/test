#include<stdio.h>
#include<Windows.h>
#include<mmsystem.h>
#include<string.h>
#pragma comment(lib, "Winmm.lib")
#define MAX 6
int main(){
	char emperorname[20];			//皇帝名称
	char temp[20];					//翻牌的名称
	char name[MAX][20]={"貂蝉","杨玉环","不知火舞","西施","郭德纲"};	//妃子名称
	int  level[]  =  {1,       2,      0,        0,     0,    -1};	//
	int loves[]={100,100,100,100,100,-1};
	int index=-1;
	int temp2;

	char levelname[5][10]={"贵人","嫔妃","贵妃","皇贵妃","皇后"};
	

	int i,j,choice;
	int count=5;
	
	printf("*********************************************************\n");
	printf("测试代码：当前妃子的简介\n");
	printf("%-12s\t级别\t好感度\n","名称");
	for(i=0;i<count;i++)
	{
		printf("%-12s\t%s\t%d\n",name[i],levelname[level[i]],loves[i]);
	}
	printf("*********************************************************\n");

	
	printf("请输入当前皇帝名号：");
	scanf("%s",emperorname);								//录入字符串不需要&符号
	printf("欢迎%s驾临，有事上奏，无事退朝\n",emperorname);	//特殊用法
	printf("1、皇帝下旨选妃：\t（增加功能）\n");
	printf("2、翻牌宠辛：\t\t（修改状态功能）\n");
	printf("3、打入冷宫：\t\t（删除功能）\n");
	printf("4、单独召见爱妃去小树林做纯洁的事：\n");
	
	printf("陛下请选择：");
	scanf("%d",&choice);
	switch(choice)
	{	
		case 1 : 
			
			if(count<MAX)					//判断是否已满
				 {
					printf("请输入妃子姓名：");
					scanf("%s",name[count]);
					level[count]=0;				//初始化等级
					loves[count]=100;			//初始化好感度
					count++;					//增加容量
				 }
				 else
				 {
					printf("陛下注重身体啊！插入失败\n");
				 }
			
			break;
		case 2 : printf("请输入翻牌的娘娘名称：");
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
							printf("宫中没有此人\n");
						 }
						 
			 
			break;
		case 3 : printf("请输入打入冷宫的娘娘名称：");
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
					printf("查无此人");
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
		case 4 : printf("4、单独召见爱妃去小树林做纯洁的事：\n");
			break;
		default: printf("别乱选\n");
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
	printf("测试代码：当前妃子的简介\n");
	printf("%-12s\t级别\t好感度\n","名称");
	for(i=0;i<count;i++)
	{
		printf("%-12s\t%s\t%d\n",name[i],levelname[level[i]],loves[i]);
	}
	printf("*********************************************************\n");



















/*PlaySound(TEXT("sounds\\翻牌.wav"),
	NULL,SND_FILENAME | SND_SYNC | SND_LOOP);*/
return 0;
}