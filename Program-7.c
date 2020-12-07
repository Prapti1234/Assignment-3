 
 #include <stdio.h>

int main()
{
    int i,j, temp, n, d, s;
    long f;
    printf("Enter the upper limit of the range:  ");
    scanf("%d", &n);
    printf("The strong numbers are : ");
        for(j=1;j<=n;j++)
        {
            temp=j;
            s=0;
            while(temp > 0)
            {
                d = temp % 10;
                f = 1;
                for(i=1; i<=d; i++)
                {
                    f = f * i;
                }
                s = s + f;
                temp= temp/ 10;
            }
            if(s == j)
                printf("%d,", j);
        }
    return 0;
}