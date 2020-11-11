/*
#include<stdio.h>
void hanoi(unsigned int ,char ,char ,char );		//��������
void move(unsigned int ,char ,char );
int main()
{
	unsigned int n;
	int i;
	for(i=0;i<3;i++){
	printf("��������������");
	scanf("%d",&n);			//����������Ŀ
	hanoi(n,'a','b','c');
	}

}
//��ŵ��
void hanoi (unsigned int n,char x,char y,char z)
{
	if(n==1)
		move(n,x,z);
	else
	{
		hanoi(n-1,x,z,y);		//n-1�����Ӵ�a��cΪ����ת�Ƶ�b��
		move(n,x,z);			//������n��a�Ƶ�c��
		
		hanoi(n-1,y,x,z);		//n-1�����Ӵ�b��aΪ����ת�Ƶ�c��
	}

}
void move(unsigned int n,char x,char z)
{
	printf("�ѵ�%d����%c���ƶ���%c��\n",n,x,z);	
}

*/





#include<stdio.h>
#include<stdlib.h>
#define STACK_INIT_SIZE 100;
#define STACKINCREMERNT 10;
//���������ջ�ṹ
typedef struct Stacktr{
	char *base;
	char *top;
	int stacksize;
}Stacktr;
//����������ջ�ṹ
typedef struct Stacknd{
	int *base;
	int *top;
	int stacksize;
}Stacknd;


//��ʼ�������ջ
void InitStacktr(Stacktr *s){		
	s->base=(char *)malloc(sizeof(char));
	if(!s->base)
		exit(0);
	s->top=s->base;
	s->stacksize=STACK_INIT_SIZE;
}

//��ʼ��������ջ
void InitStacknd(Stacknd *s){		
	s->base=(int *)malloc(sizeof(int));
	if(!s->base)
		exit(0);
	s->top=s->base;
	s->stacksize=STACK_INIT_SIZE;
}

//�������ջ
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
//��������ջ
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

//�������ջ
void poptr(Stacktr *s,char *e){
	if(s->top==s->base)
		return;
	*e=*--(s->top);
}

//��������ջ
void popnd(Stacknd *s,int *e){
	if(s->top==s->base)
		return;
	*e=*--(s->top);
}

//ȡ�����ջ��Ԫ��				//���ܻ��
char gettoptr(Stacktr s)
{
	char e=0;
	if(s.top!=s.base)
		
	 e=*--(s.top);
	return e;
}
//ȡ������ջ��Ԫ��			//���ܻ��

int gettopnd(Stacknd s)
{
	int e=0;
	if(s.top!=s.base)
		
	  e=*--(s.top);
	return e;
}



//����operate ��ֵ
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
			printf("������ַ��Ƿ�!\n");  
        break;  
	}
	return c;
}

//����Precede�����ȼ�
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




//�ж��㷨c�Ƿ�Ϊ�����        //b��֪��ture ���ͷ���ֵ��ʲô
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
	Stacktr OPTR;			//����������ջ
	Stacknd	OPND;			//����������ջ
	InitStacktr(&OPTR);		//��ʼ��
	InitStacknd(&OPND);		//��ʼ��
	pushtr(&OPTR,'#');		//'#'��ջ

	printf("��������ʽ,#��������");	
	c=getchar();
	
	
	while(c!='#'|| gettoptr(OPTR)!='#')		//
	{ 
		int test1;
		char test2;
		test1=gettopnd(OPND);
		test2=gettoptr(OPTR);
		if(!In(c)){						//�жϲ��ǲ������ͽ�������ջ
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
	//printf("��������ʽ,#��������");
	//scanf("%s",exp);
	//printf("%d",EvaluateExpression(exp));


}
