#include <stdio.h>

int main()
{
    float n, day;

    scanf("%f%f", &n, &day);

    float result = (n - day) / 7;

    printf("%d", (int)result + 1);

    return 0;
}


/*В месяце n дней. Первый понедельник наступил в день day.

Сколько в этом месяце понедельников?

Тестовые данные
Sample Input:
30 4
Sample Output:
4*/