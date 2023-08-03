#include<stdio.h>
int main()
{
	int number;
	printf("enter any integer");
	scanf("%d",number);
	if(number%2==0)
	printf("%d is the even number.",number);
	else
	printf("%d is the odd number.",number);	
	return 0;
}
