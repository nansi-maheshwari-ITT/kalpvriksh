#include<stdio.h>

int  main(){
	int number=20;
	int *ptr;

	ptr=&number;
	printf("%d\n",number);
	printf("%d\n",ptr);
	printf("%d\n",&number);
	printf("%d\n",*ptr);

	*ptr=10;
	printf("%d\n",*ptr);
	printf("%d",number);
}