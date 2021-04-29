#include<stdio.h>
int lcm(int,int);
int main()
{
    int i=0,a,b;
    printf("Enter the numbers whose lcm is to be found ");
    scanf("%d%d",&a,&b);
     i=lcm(a,b);
    printf("lcm of %d and %d is : %d",a,b,i);
    return 0;
}


int lcm(int a,int b)
{
    static int temp=1;
    if(temp%a==0&&temp%b==0)
    {
        return temp;
    }
    else
        {temp++;
        lcm(a,b);
        return temp;
        }
}
