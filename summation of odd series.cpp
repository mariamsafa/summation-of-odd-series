//summation of odd series
#include<stdio.h>
int main()
{
	int sum=0, i, n;
	printf("Enter the number : ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i+=2)
	{
		sum = sum + i;
	}
	printf("The summation of odd series is %d\n", sum);
	return 0;
}