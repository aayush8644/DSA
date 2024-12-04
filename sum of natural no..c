#include<stdio.h>
int sum_of_natural_no(int);
 int main()
 {
 	int num,result;
 	printf("\n enter a number");
 	scanf("%d",&num);
 	result = sum_of_natural_no(num);
 	printf("\n the sum is %d ",result);
 	return 0;
	 	 }
	 	 int sum_of_natural_no(int n)
	 	 {
	 	 	if(n==1)
	 	 	return 1;
	 	 	else
	 	 	return n+sum_of_natural_no(n-1);
		  }
 