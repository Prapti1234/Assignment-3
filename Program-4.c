#include <stdio.h>

int main()
{
    int n1, n2, max, lcm;
    printf("Enter any two numbers to find LCM: ");
    scanf("%d%d", &n1, &n2);
    max = (n1 > n2) ? n1 : n2;
    while(1)
    {
        if(max%n1==0 && max%n2==0)
        {
            lcm = max;
            break;
        } 

         max++;
    }
    printf("LCM of %d and %d = %d", n1, n2, lcm);
    return 0;
}