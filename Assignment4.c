#include<stdio.h>

int main(){
int sum,*ptr1,*ptr2,num1,num2;

printf(" Enter the first number : ");
   scanf("%d", &num1);
   printf(" Enter the second  number : ");
   scanf("%d", &num2);  
   ptr1=&num1;
   ptr2=&num2;
sum =*ptr1+*ptr2;
printf("The sum of %d & %d is %d",num1,num2,sum);
}

