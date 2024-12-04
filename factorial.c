#include<stdio.h>
long factorial(int);
int main()
{
	long result;
	int num;
	printf("\n enter a number");
	scanf("%d",&num);
	result=factorial(num);
	printf("\nThe factorial of %d is%ld",num,result);
	return 0;
}
long factorial(int n)
{
	if(n==1)
	return 1;
	else 
	return n*factorial(n-1);
	
}