#include <stdio.h>

int main()
{
    // Prime Number
    // This mathod is not recomended
    int n = 2, prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("This is not a prime number\n");
    }
    else
    {
        printf("This is a prime number\n");
    }

    return 0;
}