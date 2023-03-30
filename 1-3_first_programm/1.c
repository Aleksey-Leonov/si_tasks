#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2);

int main(void) {
    int input;
    int result;

    scanf("%5d", &input);

    while (input != 0)
    {
        result = input % 10;
        input = input / 10;
        printf("%d\n", result);
    }
    

    return 0;
}

float dist(int x1, int y1, int x2, int y2)
{
    // код пишем с отступом в 1 табуляцию
}