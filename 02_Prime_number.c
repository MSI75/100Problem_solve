// 02 Prime number

#include <stdio.h>

void primeNumber(int n, int flag);

int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    primeNumber(n, 0);
    return 0;
}

void primeNumber(int n, int flag)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Not prime number : ");
            flag = 1;
            break;
        }
        else
        {
            // printf("Prim number");
            // break;
        }
    }
    if (flag == 0)
    {
        printf("Prime number :");
    }
    // printf("\nprime Number");
}