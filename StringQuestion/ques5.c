#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

void push(char stack[], int *top, char item)
{
	if (*top == MAX_SIZE - 1)
	{
		printf("Stack Overflow\n");
		return;
	}
	stack[++(*top)] = item;
}

char pop(char stack[], int *top)
{
	if (*top == -1)
	{
		printf("Stack Underflow\n");
		return '\0';
	}
	return stack[(*top)--];
}

int main()
{
	char str[MAX_SIZE];
	int i, len, flag = 1;
	char stack[MAX_SIZE];
	int top = -1;

	printf("Enter a string: ");
	gets(str);

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		switch (str[i])
		{
		case '(':
		case '{':
		case '<':
		case '[':
			push(stack, &top, str[i]);
			break;
		case ')':
			if (pop(stack, &top) != '(')
			{
				flag = 0;
			}
			break;
		case '}':
			if (pop(stack, &top) != '{')
			{
				flag = 0;
			}
			break;
		case '>':
			if (pop(stack, &top) != '<')
			{
				flag = 0;
			}
			break;
		case ']':
			if (pop(stack, &top) != '[')
			{
				flag = 0;
			}
			break;
		default:
			break;
		}

		if (flag == 0)
		{
			break;
		}
	}

	if (top == -1 && flag == 1)
	{
		printf("The string is valid\n");
	}
	else
	{
		printf("The string is not valid\n");
	}

	return 0;
}
