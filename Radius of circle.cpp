#include<stdio.h>
int main()
{
    const float pi = 3.14;
    float r;
    float area, cir;
    printf("请输入半径的值：");
    scanf("%f", &r);
    area = pi * r * r;
    cir = 2 * pi * r;
    printf("半径为%5.2f的圆的面积为%5.1f,圆的周长为%5.1f\n", r, area, cir);
    return 0;
}
