#include <stdio.h>

int main()
{
    float base, height, area;
    printf("Enter the base of the Triangle: ");
    scanf("%f", &base);
    printf("Enter the  of the Triangle: ");
    scanf("%f", &height);

    // // Debugging: Print input values
    // printf("Base: %.2f, Heiheightght: %.2f\n", base, height);

    area = (base * height) / 2;
    printf("The area of the Triangle is: %.2f\n", area);

    return 0;
}
