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

    int start, a, b, choise;


    while (1)
    {
        printf("1 - Новый расчет\n0 - выход\n");
        printf("Ответ: ");
        scanf("%d", &start);

        switch (start) {

        default:
        printf("Нет такого ответа\nПрограмма завершается\n\n");
        return 0;

        case 0:
        printf("Программа завершается\n");
        return 0;

        case 1:
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
        scanf("%d", &choise);

        switch (choise)
        {
            case 1:
            printf("Ответ: %d\n\n", add(a, b));
            break;

            case 2:
            printf("Ответ: %d\n\n", sub(a, b));
            break;

            case 3:
            printf("Ответ: %d\n\n", mul(a, b));
            break;

            case 4:
            if (b == 0) {
            printf("Ошибка, деление на ноль\nПрограмма завершается\n");
            return 0;
            } else {
                printf("Ответ: %d\n\n", divide(a, b));
                break;
            }
            case 5:
            printf("Ответ: %d\n\n", square(a));
            break;

            case 6:
            printf("Ответ: %d\n\n", square(b));
            break;

            default:
            printf("Нет такого ответа\nПрограмма завершается\n\n");
            return 0;
        }
        }
    }
return 0;
}