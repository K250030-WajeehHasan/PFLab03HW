#include<stdio.h>
int main()
{
	float BasicSalary, HRA, DA, GrossSalary;
	printf("\nEnter the BasicSalary: ");
	scanf("%f", &BasicSalary);
	
	HRA = 0.10*BasicSalary;
	DA = 0.05*BasicSalary;
	GrossSalary= BasicSalary+HRA+DA;
	
	printf("\nGrossSalary = %.2f", GrossSalary);
	return 0;
}
