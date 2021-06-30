#include "header.h"

int main()
{
    printf("Please input your number x ");
    scanf("%d", x);
    printf("%d", iterative_fibo(x));
    printf("%d", recursive_fibo(x));
    return 0;
}
