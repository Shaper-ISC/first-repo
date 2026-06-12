#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int square(int x) {
    return x * x;
}

int main() {

    int start;
    int a, b;
    int choice;

    while (1) {

        printf("\n1 - новый расчёт\n");
        printf("0 - выход\n");
        printf("Выбор: ");

        scanf("%d", &start);

        if (start == 0) {
            break;
        }

        if (start != 1) {
            printf("Неверный выбор\n");
            continue;
        }

        printf("Введите a: ");
        scanf("%d", &a);

        printf("Введите b: ");
        scanf("%d", &b);

        printf("\n1 - +\n");
        printf("2 - -\n");
        printf("3 - *\n");
        printf("4 - /\n");
        printf("5 - квадрат a\n");
        printf("6 - квадрат b\n");

        printf("Выбор: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Ответ: %d\n", add(a, b));
        }
        else if (choice == 2) {
            printf("Ответ: %d\n", sub(a, b));
        }
        else if (choice == 3) {
            printf("Ответ: %d\n", mul(a, b));
        }
        else if (choice == 4) {

            if (b == 0) {
                printf("Ошибка: деление на ноль\n");
            } else {
                printf("Ответ: %d\n", divide(a, b));
            }

        }
        else if (choice == 5) {
            printf("Ответ: %d\n", square(a));
        }
        else if (choice == 6) {
            printf("Ответ: %d\n", square(b));
        }
        else {
            printf("Неверный выбор\n");
        }
    }

    printf("До свидания!\n");

    return 0;
}