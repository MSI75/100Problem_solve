// #include <stdio.h>

// int main()
// {
//     int a = 0, b = 1, c, n;

//     scanf("%d", &n);

//     printf("%d \t %d \t", a, b);

//     for (int i = 2; i < n; i++)
//     {
//         // c = (i - 1) + (i - 2);
//         c = a + b;
//         printf("%d\t", c);
//         a = b;
//         b = c;
//     }
//     printf("\n");
//     return 0;
// }

// recursive
/* #include <stdio.h>

void fibonacci(int n);

int main()
{
    int n;
    scanf("%d", &n);
    fibonacci(n - 2);
    return 0;
}

void fibonacci(int n)
{
    static int a = 0, b = 1, c;
    if (n > 0)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\t", c);
        fibonacci(n - 1);
    }
    printf("\n");
} */

// or
#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n;
    printf("Enter the number of N :");
    scanf("%d", &n);
    printf("%d \n\n", fibonacci(n));

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", fibonacci(i));
    }

    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
