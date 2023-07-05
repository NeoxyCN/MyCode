#include <stdio.h>

int main()
{
    double PI = 3.1415926535897932//这里拓展了好几位
    , square;
    int r;
    scanf("%d", &r);
    square = (PI * r * r);
    printf("%.7lf", square);
    return 0;
}