#include<stdio.h>

void main()
{
    float pi=3.14;
    int r;
    float area, perimetro;
    printf("introduza o raio:");
    scanf("%d", &r);
    area=pi*r*r;
    perimetro=2*pi*r;
    printf("area = %f\nPerímetro = %0.3f\n", area, perimetro);


}
