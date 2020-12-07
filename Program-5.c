#include <stdio.h>

int main()
{
    int i, j, n, flag;
    printf("Enter the number to print it's prime factors: ");
    scanf("%d", &n);
    printf("Prime factors of %d are: \n", n);
    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            flag= 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    flag= 0;
                    break;
                }
            }

            if(flag==1)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}