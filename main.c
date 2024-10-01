#include <stdio.h>

int main()
{
    int a, b;
    float x, y;
    char c1, c2;

    scanf("A=%d B=%d", &a, &b);

    scanf("%f %f", &x, &y);

    scanf(" %c %c", &c1, &c2);

    printf("A=%d, B=%d, x=%.1f, y=%.2f, c1=%c, c2=%c\n", a, b, x, y, c1, c2);

    return 0;
}
