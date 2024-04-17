//stack_implementation
#include<stdio.h>
int st[10001];  //global variable
int size;  //global variable
int top=-1;  //global variable
void PUSH(int ele)
{
	//overflow
	if(top==size-1)
	{
		printf("Stack is overflown / Stack is full");
	}
	else
	{
		top++;
		st[top]=ele;   //st[++top]=ele;
	}
}
void POP()
{
	if(top==-1)
	{
		printf("Stack is underflow / Stack is empty\n");
	}
	else
	{
		printf("Element deleted: %d\n",st[top]);
		top--;
	}
}
void DISPLAY()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		int i;
		for(i=top;i>=0;i--)
		{
			printf("%d ",st[i]);
		}
		printf("\n");
	}
}
int main()
{
	printf("Enter the size of stack: ");
	scanf("%d",&size);
	int ch;
	while(1)
	{
		printf("Enter\n1. PUSH\n2. POP\n3. DISPLAY\nAny other to exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			//push operation
			int ele;
			printf("Enter a element to push: ");
			scanf("%d",&ele);
			PUSH(ele);
		}
		else if(ch==2)
		{
			POP();
		}
		else if(ch==3)
		{
			DISPLAY();
		}
		else
		{
			break;
		}
	}
}
