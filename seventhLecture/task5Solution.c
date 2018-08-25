#include <stdio.h>

int main()
{
    int first = 0, second = 1, next = 0, n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if(n < 0){
        return 0;
    }

    printf("Fibonacci Series: %d %d ", first, second);

    next = first + second;

    while(next <= n)
    {
        printf("%d ",next);
        first = second;
        second = next;
        next = first + second;
    }

    return 0;
}
