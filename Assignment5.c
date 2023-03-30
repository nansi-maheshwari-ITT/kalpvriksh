#include<stdio.h>

void add(int *x,int*y,int *result){
	*result=*x+*y;
}

int main(){
int num1=2;
int num2=3;
int sum;

add(&num1,&num2,&sum);
printf("The sum of %d & %d is %d",num1,num2,sum);
}

