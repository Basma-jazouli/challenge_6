#include <stdio.h>
#include <math.h>
int main()
{
    
    const float pi = 3.14;
    float c  , r;

    printf("ecrivez le rayon : ");
    scanf("%f",&r);
    c = 2 * r * pi;
    printf("c = %.2f",c);


    return 0;
}
