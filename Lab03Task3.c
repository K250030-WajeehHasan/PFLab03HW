#include<stdio.h>
int main ()
{
	int number;
	printf("Enter an integer betweem 65 and 90:");
	scanf("%d", &number);
	
	if(number>=65 && number<=90)
	{
	    printf("\nInteger = %d", number);
	    printf("\n%d = %c",number,(char)number);
    }
	else
	{
		printf("Please enter a correct input.");
		
	}
	return 0;
}
