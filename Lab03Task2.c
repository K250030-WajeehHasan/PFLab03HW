#include<stdio.h>
int main ()
{
	int a,b,x;
	printf("\nEnter value of a:");
	scanf("%d", &a);
	printf("\nEnter value of b:");
	scanf("%d", &b);
	
	x = a;
	a = b;
	b = x;
	
	printf("\nA = %d, \nB = %d", a, b);
	return 0;
}
