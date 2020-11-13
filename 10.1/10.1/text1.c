#include<stdio.h>
#include<Windows.h>
#include<time.h>

int main()
{
								//拳皇攻击
	

	
	//srand(time(NULL));
    int hp1=100,hp2=100;		//两人血量
	int att1,att2;				//两人攻击力
	int i=0;					//轮次
	while(hp1>0&&hp2>0)
	{
		
		att1=rand() % 11 + 5 ;		//一号攻击力
		att2=rand() % 11 + 5;		//二号攻击力
		
		hp2-=att1;				//一号先攻击
		hp1-=att2;
		if(hp1<0||hp2<0){
			printf("游戏结束\n");
			
		break;
		}
		
		i++;
		printf("*************************************\n");
		printf("第%d轮\n",i);
		printf("一号血量为：%d\t攻击力为%d\n",hp1,att1);
		printf("二号血量为：%d\t攻击力为%d\n",hp2,att2);
		printf("*************************************\n");
		Sleep(500);


	}
}