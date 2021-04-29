#include<stdio.h>
void main()
{
     int n;
     printf("How many times do you need the pattern to be repeated\n");
     scanf("%d",&n);
     for(int i=0;i<n;++i)
     {
         printf("01");
     }
     return 0;
}
