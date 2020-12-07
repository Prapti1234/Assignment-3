#include <stdio.h>

int main()
{
    int b, ex ,p = 1,i;
    printf("Enter the base:  ");
    scanf("%d", &b);
    printf("Enter the exponent:  ");
    scanf("%d", &ex);
    
    for(i=1; i<=ex; i++)
    {
        p = p * b;
    }

    printf("%d ^ %d = %d", b, ex, p);
    return 0;
}