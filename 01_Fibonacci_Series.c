#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, n;

    scanf("%d", &n);

    printf("%d \t %d \t", a, b);

    for (int i = 2; i < n; i++)
    {
        // c = (i - 1) + (i - 2);
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}

// recursive
