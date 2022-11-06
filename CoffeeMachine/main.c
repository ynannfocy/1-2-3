#include "func.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vibor_coffee = 0;
    int coffee = 150;
    while (vibor_coffee != 'q') {
        printf("          Menu\n");
        printf("1. Americano - price = 100\n"); // added price
        printf("2. Cappuccino - price = 150\n");
        printf("3. Latte - price = 200\n");
        printf("q - leave\n");
        scanf("%c", &vibor_coffee);
        setbuf(stdin, NULL);

        switch (vibor_coffee) {
        case '1':
            americano(100, 25, 100);
            break;
        case '2':
            cappuccino(100, 50, 25, 150);
            break;
        case '3':
            latte(100, 100, 25, 200);
            break;

        case '4':
            back_menu();
            break;
        default:
            break;
        }
    }
}
