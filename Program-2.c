#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the number to compute it's factors:  ");
    scanf("%d", &n);
    printf("All factors of %d are: \n", n);
    for(i=1; i<=n; i++)
    {
        
        if(n % i == 0)
        {
            printf("%d, ",i);
        }
    }
    
    return 0;
}