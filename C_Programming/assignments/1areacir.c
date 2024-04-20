void area_of_circle(float *r, float *area)
{
    *area = 3.14 * *r * *r;
}
#include<stdio.h>
int main()
{
    float radius, area;
    printf("\nEnter the radius of Circle : ");
    scanf("%f", &radius);
    //area = 3.14 * radius * radius;
    area_of_circle(&radius, &area);
    printf("\nArea of Circle : %f", area);
    return (0);
 }