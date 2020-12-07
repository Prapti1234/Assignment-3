#include <stdio.h>

int main()
{
    float phys, chem, bio, math, comp,p; 
    printf("Enter the marks of physics, chemistry,biology,mathematics and computer: ");
    scanf("%f%f%f%f%f", &phys, &chem, &bio, &math, &comp);
    p = (phys + chem + bio + math + comp) / 5;
    printf("Final percentage is  %.2f\n", p);
    if(p >= 90)
    {
        printf("Grade:  A");
    }
    else if(p >= 80)
    {
        printf("Grade:  B");
    }
    else if(p >= 70)
    {
        printf("Grade:  C");
    }
    else if(p >= 60)
    {
        printf("Grade:  D");
    }
    else if(p >= 40)
    {
        printf("Grade:  E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}