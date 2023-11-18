#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    // a = 10;
    // while (a > 10) ----> These two lines will lead to an infinite loop
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }
    return 0;
}