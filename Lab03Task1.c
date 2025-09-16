#include<stdio.h>
int main ()
{
    int marks1, marks2, marks3, total;
    float percentage;
    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3);

    total = marks1+marks2+marks3;
    percentage =(total/300.0)*100;
    printf("\nTotal marks = %d", total);
    printf("\nPercentage = %.2f", percentage);

    return 0;
}

