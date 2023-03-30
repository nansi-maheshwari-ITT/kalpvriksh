#include<stdio.h>

int  main(){
	int number=10;
	int *ptr;

	ptr=&number;
	printf("%d\n",number);
	printf("%d",ptr);
}