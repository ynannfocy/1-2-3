#include "func.h"
#include <stdio.h>
#include <stdlib.h>

static int bank_nal = 10000;
static int bank_card = 0;
static int tank_water = 25000;
static int tank_coffee = 10000;
static int tank_milk = 15000;

void americano(int water, int coffee, int price)
{
    int res = 0;
    if (tank_water >= water && tank_coffee >= coffee) {
        printf("nal?card?\n");
        scanf("%d", &res);
        setbuf(stdin, NULL);
        if (res == 1) {
            printf("scolco vstavil?\n");
            scanf("%d", &res);
            setbuf(stdin, NULL);
            if (res > price) {
                tank_coffee -= coffee;
                tank_water -= water;
                bank_nal += price;
                printf("coffe gotov , vasha sdacha = %d\n", res - price);
            } else if (res == price) {
                tank_coffee -= coffee;
                tank_water -= water;
                bank_nal += price;
                printf("coffee gotov \n");
            } else {
                printf("MALO DENYAK!!!\n");
            }
        } else if (res == 2) {
            tank_coffee -= coffee;
            tank_water -= water;
            bank_card += res - price;
            printf("COFFEe GOTOV!\n");
        } else {
            printf("ERROR!\n");
        }
    }
}

void cappuccino(int water, int milk, int coffee, int price)
{
    int res = 0;
    if (tank_water >= water && tank_milk >= milk && tank_coffee >= coffee) {
        printf("nal?card?\n");
        scanf("%d", &res);
        setbuf(stdin, NULL);

        if (res == 1) {
            printf("skolko vstavil?\n");
            scanf("%d", &res);
            setbuf(stdin, NULL);

            if (res > price) {
                tank_water -= water;
                tank_milk -= milk;
                tank_coffee -= coffee;
                bank_nal += price;
                printf("coffe gotov, vasha sdacha = %d", res - price);
            } else if (res == price) {
                tank_water -= water;
                tank_milk -= milk;
                tank_coffee -= coffee;
                bank_nal += price;
                printf("coffe gotov\n");
            } else {
                printf("ERROR!\n");
            }
        } else if (res == 2) {
            tank_water -= water;
            tank_milk -= milk;
            tank_coffee -= coffee;
            bank_card += res - price;
            printf("VASH COFFEE GOTOY\n");
        } else {
            printf("ERROR\n");
        }
    }
}

void latte(int water, int milk, int coffee, int price)
{
    int res = 0;
    if (tank_water >= water && tank_milk >= milk && tank_coffee >= coffee) {
        printf("nal?card?\n");
        scanf("%d", &res);
        setbuf(stdin, NULL);
        if (res == 1) {
            printf("Skolko vstavil?\n");
            scanf("%d", &res);
            setbuf(stdin, NULL);
            if (res > price) {
                tank_water -= water;
                tank_milk -= milk;
                tank_coffee -= coffee;
                bank_nal += price;
                printf("coffe gotov , vasha sdacha = %d\n", res - price);
            } else if (res == price) {
                tank_water -= water;
                tank_milk -= milk;
                tank_coffee -= coffee;
                bank_nal += price;
                printf("COFE GOTOVO\n");
            } else {
                printf("BB!!!\n");
            }
        } else if (res == 2) {
            tank_water -= water;
            tank_milk -= milk;
            tank_coffee -= coffee;
            bank_card += res - price;
            printf("COFE GOTOVO!!!)\n");
        } else {
            printf("Eror\n");
        }
    }
}

void back_menu()
{
    int tmp = 0;
    char vibor_bak = 0;
    while (vibor_bak != 'w') {
        printf("      Service Menu\n");
        printf("1. BAK VODI = %d\n", tank_water);
        printf("2. BAK COFFEE = %d\n", tank_coffee);
        printf("3. BAK MOLOKA = %d\n", tank_milk);
        printf("4. KASSA = %d\n", bank_nal);
        printf("w - leave\n");
        scanf("%c", &vibor_bak);

        switch (vibor_bak) {
        case '1':
            printf("scolco dobavit?\n");
            scanf("%d", &tmp);
            setbuf(stdin, NULL);
            printf("Bak popolnen yspeshno na %d\n", tmp);
            tank_water += tmp;
            printf("Itogo %d\n", tank_water);
            break;
        case '2':
            printf("scolco dobavit?\n");
            scanf("%d", &tmp);
            setbuf(stdin, NULL);
            printf("Bak popolnen yspeshno na %d\n", tmp);
            tank_coffee += tmp;
            printf("Itogo %d\n", tank_coffee);
            break;
        case '3':
            printf("scolco dobavit?\n");
            scanf("%d", &tmp);
            setbuf(stdin, NULL);
            printf("Bak popolnen yspeshno na %d\n", tmp);
            tank_milk += tmp;
            printf("Itogo %d\n", tank_milk);
            break;
        case '4':
            printf("scolco snat?\n");
            scanf("%d", &tmp);
            setbuf(stdin, NULL);
            printf("snato %d\n", tmp);
            bank_nal -= tmp;
            printf("Itogo %d\n", bank_nal);
        default:
            break;
        }
    }
}