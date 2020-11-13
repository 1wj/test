
#include<stdio.h>
#include<stdlib.h>
#define STACK_INT_SIZE 100;
#define STACKNCREMENT 10;
//对结构不进行修改的传结构  对结构进行修改的传地址
//先这样记 指针指来指去就用->, 结构就是属于归属就用.
typedef struct ppstack {    ///typedef 宏定义 p73 10:20
	int *base;
	int *top;
	int stacksize;
}ppstack;
void Initpstack(ppstack *s){					//定义栈
	s->base=(int *)malloc(sizeof(int));
	if(!s->base)
		exit(0);
	s->top=s->base;
	s->stacksize=STACK_INT_SIZE;
}
void push(ppstack *s,int e)				//进栈 //&s 取地址
{
	if(s->top-s->base>=s->stacksize)
	{
		s->base=(int *)realloc(s->base,(s->stacksize+10)*sizeof(int))	;//?;
		if(!s->base)
			exit(0);
	}
	
	 *(s->top)++=e;				//？什么叫用e返回其值
	
}
void pop(ppstack *s, int *e)			//出栈
{
	if(s->top==s->base)
	{	
		printf("栈空");
		return ;
	}
	*e = *--(s->top);
	//return *(s->top）--;				//p46-47	？ 
}

int stacklength(ppstack s)
{
	return (s.top-s.base);
}

int main()
{
	int i, k,t,len;
	ppstack s;
	Initpstack(&s);				//初始化栈
	while(1)
	{
	printf("请输入十进制数");
	scanf("%d",&k);
	while(k!=0)					//进栈
	{
		t=k%8;
		push(&s,t);
		k=k/8;
	}
	len=stacklength(s);
	for(i=0;i<len;i++)
	{
		pop(&s,&t);
		printf("%d  ",t);
	}
	printf("\n");
	
	}

}


//    网络

/*
#define stack_size 100
#define stack_crement_size 10
typedef int Elemtype;
 //结构定义一般放在声明之后
///声明一个栈 
typedef struct Stack
{
     Elemtype *top;
     Elemtype *base;
     int stacksize;
}sqstack;
 
//函数声明
void IntiStack(sqstack *s);
int Push(sqstack* s,Elemtype e);
void Pop(sqstack* s,Elemtype *e);
int StackLen(sqstack s);
int StackEmpty(sqstack* s);
void DestoryStack(sqstack* s); 
 
//初始化栈 
void IntiStack(sqstack *s)
{
    s->base = (Elemtype*)malloc(sizeof(Elemtype)*stack_size);
    if(!s->base)
        exit(0);
 
    s->top = s->base;                 //设置栈为空 
    s->stacksize = stack_size;
}
 
//入栈操作 
int Push(sqstack* s,Elemtype e)
{
    if(s->top - s->base >= s->stacksize)    //判断是否栈满 
    {
        s->base = (Elemtype*)realloc(s->base,(s->stacksize + stack_crement_size)*sizeof(Elemtype));
        if(!s->base)
         exit(0);
 
        s->top = s->base + s->stacksize;                                   //重新设置栈顶 
        s->stacksize += stack_crement_size;                                //重新设置栈的大小 
    }
 
    *(s->top) = e;
    s->top++;
 
    return 1;
}
 
//出栈操作 
void Pop(sqstack* s,Elemtype *e)
{
    if(s->top == s->base)                                                //如果栈为空 
     return;
 
    *e = *--(s->top);
}
 
//求栈的当前容量 
int StackLen(sqstack s)
{
    return s.top - s.base;
}
 
//清空栈 
int StackEmpty(sqstack* s)
{
    return (s->stacksize == 0);
}
//销毁栈 
void DestoryStack(sqstack* s)
{
    int i,len;
    len = s->stacksize;
 
    for( i = 0; i <len; i++)
    {
        s->base++;
        free(s->base);
    }
 
    s->base = s->top = NULL;
    s->stacksize  = 0;
}
 
int main(void)
{
    sqstack s;
    int i,c,k;
    int j = 0;               //用来记录转化后的8进制数位数 
    int N;
    printf("请输入一个十进制数：");
    scanf("%d",&N); 
   // int W = N; 
 
    IntiStack(&s);           //初始化栈 
 
      while(N != 0)          //除k取余法转换，并把余数入栈
    {
      k = N%8;
      Push(&s,k);
      N = N/8;
      j++;
    }
 
 
    printf("十进制数 转化为八进制数为: ");
    for( i=0; i<j; i++)
    {
        Pop(&s,&c);
        printf("%d ",c);
    }
 
    //DestoryStack(&s);
    printf("\n");
    return 0;
	
}
*/