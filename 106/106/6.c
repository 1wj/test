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
		printf("请输入三门成绩");
		for(j=0;j<3;j++)
		{
			
			scanf("%d\t",&score[i][j]);
		}
		printf("\n");
	}
	printf("语文\t数学\t英语\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",score[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	double powers[5]={42322,45771,40907,41234,40767};
	double deletepower;							//删除的数据
	double temp;
	int deleteindex=-1;							//删除数据的下标
	int i,j;
	int count=5;
	double insertpower;
/*	printf("请输入要删除得数：");
	scanf("%lf",&deletepower);					//输入要删除的数
	for(i=0;i<count;i++)
	{
		if(deletepower==powers[i])				//查找要删除的下标
		{
			deleteindex=i;
			break;
		}
	}
	if(deleteindex==-1)
	//if(i=5)
	{
		printf("不好意思没找到");					//判断是否找到
	}
	else
	{
		for(i=deleteindex;i<count-1;i++)
		{
			powers[i]=powers[i+1];				//从下标开始后面覆盖前面
		}
		count--;
	}
	printf("删除后的数组为：\n");
	for(i=0;i<count;i++)
	{
		printf("%.0lf\t",powers[i]);			//输出更新后的数组
	}
	printf("\n");*/

	//插入一个战力值
	printf("请输入一个要插入的战力值：");
	scanf("%lf",&insertpower);
	powers[count]=insertpower;
	count++;
	for(i=0;i<count;i++)
	{
		printf("%.0lf\t",powers[i]);			//输出更新后的数组
	}
	printf("\n");
/*	//升序排列
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
	printf("升序后的数组：\n");
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
	printf("数组为\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",num[i]);
	}
*/

/*	int num[N]={16,25,9,90,23};
	int i,j,temp;					//用来装临时变量
	for(i=0;i<N-1;i++)				//外层循环控制轮次=数组个数-1
	{
		for(j=0;j<N-1-i;j++)		//内层循环控制每轮次数=数组个数-1-轮次
		{
			if(num[j]<num[j+1])		//如果前面一个数小于后面的数就交换
			{
				temp=num[j];
				num[j]=num[j+1];	//赋予前面自己就为空了
				num[j+1]=temp;			
			}
		}
	}
	printf("数组为:\n");				//输出数组
	for(i=0;i<N;i++)
	{
		printf("%d\t",num[i]);
	}							//降序
   printf("\n");
*/

/*	int score[]={8,4,2,1,23,344,12};
	int i,sum=0;
	double avg;
	int search;		//查找的值
	printf("输入数组元素\n");
	for(i=0;i<7;i++)
	{
		printf("%d\t",score[i]);
		sum+=score[i];
	}
	printf("\n");
	avg=sum/7.0;
	printf("和为：%d\t",sum);
	printf("平均值为：%lf\n",avg);
	printf("请输入要查找的值：");
	scanf("%d",&search);
	for(i=0;i<7;i++)
	{
		if(search==score[i])
		{
			printf("爱你么么哒\n");
			break;
		}
		
	}
	if(i==7)
	{
		printf("没找到\n");
	}
*/
}