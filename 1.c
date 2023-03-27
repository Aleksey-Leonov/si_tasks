#include <stdio.h>

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




/*Составить программу, которая будет считывать введённое пятизначное число. 
 После чего, каждую цифру этого числа необходимо вывести в новой строке.*/