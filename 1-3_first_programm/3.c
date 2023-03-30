#include <stdio.h>

int main()
{
    int hour, minutes, seconds;

    // прочитать входные данные
    scanf("%d%d", &hour, &minutes);

    // вычислить
    minutes = hour * 60 + minutes;
    seconds = minutes * 60;

    // напечатать результат
    printf("%d\n%d", minutes, seconds);

    return 0;
}