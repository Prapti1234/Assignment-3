 
 #include <stdio.h>

int main()
{
    int i, temp, n, d, s=0;
    long f;
    printf("Enter a number to check if it is a strong number: ");
    scanf("%d", &n);
    temp = n;
    while(n > 0)
    {
        d = n % 10;
        f = 1;
        for(i=1; i<=d; i++)
        {
            f = f * i;
        }
        s = s + f;
        n = n/ 10;
    }
    if(s == temp)
    {
        printf("%d is a strong number", temp);
    }
    else
    {
        printf("%d is not a strong number", temp);
    }

    return 0;
}