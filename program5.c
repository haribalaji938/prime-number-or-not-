#include<stdio.h>
int prime(int, int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(prime(num, num/2) == 1)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }
    
    return 0;
}
int prime(int n, int i)
{
    if(i == 1)
        return 1;
    else
    {
        if(n%i == 0)
            return 0;
        else
           return prime(n, i-1);
    }
}
