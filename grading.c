#include<stdio.h>
void main()
{
    int marks=0;
    printf("Enter your marks\n");
    scanf("%d",&marks);
    if(marks>=84)
    {
        printf("Your grade is A");
    }
    else if(marks>70&&marks<=84)
    {
        printf("Your grade is B");
    }
    else if(marks>55&&marks<=69)
    {
        printf("Your grade is C");
    }
    else if(marks>40&&marks<=54)
    {
        printf("Your grade is D");
    }
    else if(marks<=40)
    {
        printf("Your grade is F");
    }

}
