#include <stdio.h>

int main()
{
	int n;

	printf("Enter the size of array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter %d numbers:\n", n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int *ptr = arr;
	printf("The number of the array are:\n");

	for (int i = 0; i < n; i++)
	{
		printf("%d ", *ptr); 
		ptr++;				 
}
}