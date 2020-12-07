#include <stdio.h>

int main()
{
    int i, n1, n2, min, hcf=1;
    printf("Enter two numbers to find their HCF:  ");
    scanf("%d%d", &n1, &n2);
    if(n1<n2)
       min=n1;
     else
       min=n2;
    for(i=1; i<=min; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d\n", n1, n2, hcf);
    return 0;
}