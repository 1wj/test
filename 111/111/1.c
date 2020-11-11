/*
#include<stdio.h>
void hanoi(unsigned int ,char ,char ,char );		//声明函数
void move(unsigned int ,char ,char );
int main()
{
	unsigned int n;
	int i;
	for(i=0;i<3;i++){
	printf("请输入盘子数：");
	scanf("%d",&n);			//输入盘子数目
	hanoi(n,'a','b','c');
	}

}
//汉诺塔
void hanoi (unsigned int n,char x,char y,char z)
{
	if(n==1)
		move(n,x,z);
	else
	{
		hanoi(n-1,x,z,y);		//n-1个盘子从a以c为中心转移到b上
		move(n,x,z);			//将盘子n从a移到c上
		
		hanoi(n-1,y,x,z);		//n-1个盘子从b以a为中心转移到c上
	}

}
void move(unsigned int n,char x,char z)
{
	printf("把第%d个从%c柱移动到%c柱\n",n,x,z);	
}

*/





#include<stdio.h>
#include<stdlib.h>
#define STACK_INIT_SIZE 100;
#define STACKINCREMERNT 10;
//声明运算符栈结构
typedef struct Stacktr{
	char *base;
	char *top;
	int stacksize;
}Stacktr;
//声明运算数栈结构
typedef struct Stacknd{
	int *base;
	int *top;
	int stacksize;
}Stacknd;


//初始化运算符栈
void InitStacktr(Stacktr *s){		
	s->base=(char *)malloc(sizeof(char));
	if(!s->base)
		exit(0);
	s->top=s->base;
	s->stacksize=STACK_INIT_SIZE;
}

//初始化运算数栈
void InitStacknd(Stacknd *s){		
	s->base=(int *)malloc(sizeof(int));
	if(!s->base)
		exit(0);
	s->top=s->base;
	s->stacksize=STACK_INIT_SIZE;
}

//运算符进栈
void pushtr(Stacktr *s,char e)
{
	if(s->top-s->base>=s->stacksize)
	{
		s->base=(char *)realloc(s->base,(s->stacksize+10)*sizeof(char));
	}
	if(!s->base)
	exit(0);
	*(s->top)++=e;
}
//运算数进栈
void pushnd(Stacknd *s,int e)
{
	if(s->top-s->base>=s->stacksize)
	{
		s->base=(int *)realloc(s->base,(s->stacksize+10)*sizeof(int));
	}
	if(!s->base)
	exit(0);
	*(s->top)++=e;
}

//运算符出栈
void poptr(Stacktr *s,char *e){
	if(s->top==s->base)
		return;
	*e=*--(s->top);
}

//运算数出栈
void popnd(Stacknd *s,int *e){
	if(s->top==s->base)
		return;
	*e=*--(s->top);
}

//取运算符栈顶元素				//可能会错
char gettoptr(Stacktr s)
{
	char e=0;
	if(s.top!=s.base)
		
	 e=*--(s.top);
	return e;
}
//取运算数栈顶元素			//可能会错

int gettopnd(Stacknd s)
{
	int e=0;
	if(s.top!=s.base)
		
	  e=*--(s.top);
	return e;
}



//计算operate 的值
int Operate(int a,char theta, int b){
	int c;
	switch(theta)
	{
	case '+':
		c=a+b;
		break;
	case '-':
		c=a-b;
		break;
	case '*':
		c=a*b;
		break;
	case '/':		
		c=a/b;
		break;
	default :
			printf("输入的字符非法!\n");  
        break;  
	}
	return c;
}

//计算Precede的优先级
char Precede(char t1,char t2)
{
	char f;
	switch(t2)
	{
	case '+': 
	case '-': 
		if(t1=='('||t1=='#')
			 f='<';
		 else
			 f='>';
		break;
	case '*':
	case '/':
		if(t1=='('||t1=='#'||t1=='+'||t1=='-')
			 f='<';
		 else
			 f='>';
		break;
	case '(':
			if(t1==')')
			 f='=';
		 else
			 f='<';
			break;
	case ')':
		if(t1=='#'||t1=='(')
			 f='=';
		 else
			 f='>';
			break;
	case '#':
		if(t1=='#'||t1=='(')
			 f='=';
		 else
			 f='>';
			break;
	}
	return f;
}




//判断算法c是否为运算符        //b不知道ture 类型返回值是什么
 int In(char c)
 {
	switch(c)
	{
	case '+': 	
	case '-':	
	case '*':	
	case '/': 	
	case '(': 		
	case ')': 
	case '#': return 1;
				break;
	default : return 0;
		break;
	}
 }

int EvaluateExpression(){
 	int a,b;
	char c,theta,x;
	Stacktr OPTR;			//创建操作符栈
	Stacknd	OPND;			//创建操作数栈
	InitStacktr(&OPTR);		//初始化
	InitStacknd(&OPND);		//初始化
	pushtr(&OPTR,'#');		//'#'进栈

	printf("请输入表达式,#来结束：");	
	c=getchar();
	
	
	while(c!='#'|| gettoptr(OPTR)!='#')		//
	{ 
		int test1;
		char test2;
		test1=gettopnd(OPND);
		test2=gettoptr(OPTR);
		if(!In(c)){						//判断不是操作符就进操作数栈
			pushnd(&OPND,c-'0');
			c=getchar();
		}
		else
		{
			switch(Precede(gettoptr(OPTR),c))
			{
				case '<':
					pushtr(&OPTR,c); c=getchar();
					break;
				case '=':
					poptr(&OPTR, &x); c=getchar();
					break;
				case '>':
					poptr(&OPTR,&theta);
					popnd(&OPND,&b);
					popnd(&OPND,&a);
					pushnd(&OPND,Operate(a,theta,b));
					//c=getchar();		
					break;
		
			}
		}
	}
	return gettopnd(OPND);
}
int main()
{
	

	//char exp[20];
	printf("%d",EvaluateExpression());
	//printf("请输入表达式,#来结束：");
	//scanf("%s",exp);
	//printf("%d",EvaluateExpression(exp));


}
