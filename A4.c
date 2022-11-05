#include<stdio.h>
int main()
{
    float R;
    double area;
    printf("enter the radius of circle");
    scanf("%f",&R);
    area = 3.14*R*R;
    printf("\nArea of circle is %lf having radius %f",area,R);
    return 0;


}
