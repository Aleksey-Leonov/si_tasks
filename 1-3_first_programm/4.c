#include <stdio.h>

int main()
{
    int v;

    scanf("%d", &v);

    float resultVMS = ((float)v * 1000) / (float)3600;

    printf("%f\n", resultVMS);

    return 0;
}