#include<stdio.h>
#include<conio.h>
#define MAX 50
int stack[MAX];
int top=-1;
void push(int ele)
{
	stack[++top]=ele;
}
int pop()
{
	return stack[top--];
}
int main()
{
	char postfix[MAX],ch;
	int i=0,op1,op2;
	printf("Enter the postfix Expression:\n");
	gets(postfix);
	while((ch=postfix[i])!='\0')
	{
		i++;
		if(isdigit(ch))                                                                                       
		{
			push(ch='0');
			}
		else
		{
			op2=pop();
			op1=pop();
			switch(ch)
			{
				case '+' : push(op1+op2);
				           break;
				           
				case '-' : push(op1-op2);
				           break;
				           
				case '*' : push(op1*op2);
				           break;
				           
				case '/' : push(op1/op2);
				           break;
				           
				case '%' : push(op1%op2);
				           break;
				}
			}
			
		}
		printf("Given postfix Expression is :\n");
		printf("result :%d\n",stack[top]);
		return 0;
}
