
#include<stdio.h>
#include<stdlib.h>
#define STACK_INT_SIZE 100;
#define STACKNCREMENT 10;
//�Խṹ�������޸ĵĴ��ṹ  �Խṹ�����޸ĵĴ���ַ
//�������� ָ��ָ��ָȥ����->, �ṹ�������ڹ�������.
typedef struct ppstack {    ///typedef �궨�� p73 10:20
	int *base;
	int *top;
	int stacksize;
}ppstack;
void Initpstack(ppstack *s){					//����ջ
	s->base=(int *)malloc(sizeof(int));
	if(!s->base)
		exit(0);
	s->top=s->base;
	s->stacksize=STACK_INT_SIZE;
}
void push(ppstack *s,int e)				//��ջ //&s ȡ��ַ
{
	if(s->top-s->base>=s->stacksize)
	{
		s->base=(int *)realloc(s->base,(s->stacksize+10)*sizeof(int))	;//?;
		if(!s->base)
			exit(0);
	}
	
	 *(s->top)++=e;				//��ʲô����e������ֵ
	
}
void pop(ppstack *s, int *e)			//��ջ
{
	if(s->top==s->base)
	{	
		printf("ջ��");
		return ;
	}
	*e = *--(s->top);
	//return *(s->top��--;				//p46-47	�� 
}

int stacklength(ppstack s)
{
	return (s.top-s.base);
}

int main()
{
	int i, k,t,len;
	ppstack s;
	Initpstack(&s);				//��ʼ��ջ
	while(1)
	{
	printf("������ʮ������");
	scanf("%d",&k);
	while(k!=0)					//��ջ
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


//    ����

/*
#define stack_size 100
#define stack_crement_size 10
typedef int Elemtype;
 //�ṹ����һ���������֮��
///����һ��ջ 
typedef struct Stack
{
     Elemtype *top;
     Elemtype *base;
     int stacksize;
}sqstack;
 
//��������
void IntiStack(sqstack *s);
int Push(sqstack* s,Elemtype e);
void Pop(sqstack* s,Elemtype *e);
int StackLen(sqstack s);
int StackEmpty(sqstack* s);
void DestoryStack(sqstack* s); 
 
//��ʼ��ջ 
void IntiStack(sqstack *s)
{
    s->base = (Elemtype*)malloc(sizeof(Elemtype)*stack_size);
    if(!s->base)
        exit(0);
 
    s->top = s->base;                 //����ջΪ�� 
    s->stacksize = stack_size;
}
 
//��ջ���� 
int Push(sqstack* s,Elemtype e)
{
    if(s->top - s->base >= s->stacksize)    //�ж��Ƿ�ջ�� 
    {
        s->base = (Elemtype*)realloc(s->base,(s->stacksize + stack_crement_size)*sizeof(Elemtype));
        if(!s->base)
         exit(0);
 
        s->top = s->base + s->stacksize;                                   //��������ջ�� 
        s->stacksize += stack_crement_size;                                //��������ջ�Ĵ�С 
    }
 
    *(s->top) = e;
    s->top++;
 
    return 1;
}
 
//��ջ���� 
void Pop(sqstack* s,Elemtype *e)
{
    if(s->top == s->base)                                                //���ջΪ�� 
     return;
 
    *e = *--(s->top);
}
 
//��ջ�ĵ�ǰ���� 
int StackLen(sqstack s)
{
    return s.top - s.base;
}
 
//���ջ 
int StackEmpty(sqstack* s)
{
    return (s->stacksize == 0);
}
//����ջ 
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
    int j = 0;               //������¼ת�����8������λ�� 
    int N;
    printf("������һ��ʮ��������");
    scanf("%d",&N); 
   // int W = N; 
 
    IntiStack(&s);           //��ʼ��ջ 
 
      while(N != 0)          //��kȡ�෨ת��������������ջ
    {
      k = N%8;
      Push(&s,k);
      N = N/8;
      j++;
    }
 
 
    printf("ʮ������ ת��Ϊ�˽�����Ϊ: ");
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