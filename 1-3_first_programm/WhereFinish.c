#include <stdio.h>

int main()
{
    int round, total;

    scanf("%d%d", &round, &total);

    int result1 = total / round;
    int result2 = total - round * result1;

    printf("%d %d", result1, result2);
    

    return 0;
}


/*Длина круга беговой дорожки на стадионе round метров. Студенты должны пробежать total метров.

Напечатать:

Сколько полных кругов должны пробежать студенты?
В скольких метрах от старта надо поставить финиш?
Все числа целые.*/