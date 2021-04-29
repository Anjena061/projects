#include<stdio.h>
void main()
{
    int i=0;
    printf("Enter a number between 1-5 \n");
    scanf("%d",&i);
    switch(i)
    {
    case 1: printf("Food item - Sandwich\n");
            printf("Price     - Rs 149");
            break;
    case 2: printf("Food item - Pasta\n");
            printf("Price     - Rs 179");
            break;
    case 3: printf("Food item - French fries\n");
            printf("Price     - Rs 99");
            break;
    case 4: printf("Food item - Burger\n");
            printf("Price     - Rs 129");
            break;
    case 5: printf("Food item - Pizza\n");
            printf("Price     - 239");
            break;

    }
}
