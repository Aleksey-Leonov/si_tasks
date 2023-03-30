#include <stdio.h>

int main()
{
    float s, w, ch;

    scanf("%f%f%f", &s, &w, &ch);

    float res = s / w / ch;

    printf("%d", (int)res);

    return 0;
}

