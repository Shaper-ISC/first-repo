#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }
int square(int x) { return x * x; }

/* ===== UI ===== */

void printMainMenu() {
    printf("\n1 - Новый расчет\n2 - История расчетов\n0 - выход\n");
}

void printCalcMenu() {
    printf("\n1 - +\n");
    printf("2 - -\n");
    printf("3 - *\n");
    printf("4 - /\n");
    printf("5 - квадрат a\n");
    printf("6 - квадрат b\n");
}

/* ===== INPUT ===== */

int readInt(char *text) {
    int value;
    printf("%s", text);
    scanf("%d", &value);
    return value;
}

/* ===== HISTORY ===== */

void saveHistory(int history[], int count, int value) {
    history[count] = value;
}

void printHistory(int history[], int count) {
    printf("Расчетов было: %d\n", count);
    printf("Результаты: ");

    for (int i = 0; i < count; i++) {
        printf("%d ", history[i]);
    }

    printf("\n");
}

/* ===== CALCULATION ===== */

int calculate(int choice, int a, int b) {

    switch (choice) {
        case 1: return add(a, b);
        case 2: return sub(a, b);
        case 3: return mul(a, b);
        case 4: return divide(a, b);
        case 5: return square(a);
        case 6: return square(b);
        default: return 0;
    }
}

/* ===== MAIN ===== */

int main() {

    int history[100];
    int count = 0;

    int start, a, b, choice, result;

    while (1) {

        printMainMenu();
        start = readInt("Ответ: ");

        switch (start) {

            case 0:
                printf("Программа завершается\n");
                return 0;

            case 1:

                a = readInt("Введите a: ");
                b = readInt("Введите b: ");

                printCalcMenu();
                choice = readInt("Выбор: ");

                if (choice == 4 && b == 0) {
                    printf("Ошибка: деление на ноль\n");
                    break;
                }

                result = calculate(choice, a, b);

                printf("Ответ: %d\n", result);

                saveHistory(history, count, result);
                count++;

                break;

            case 2:
                printHistory(history, count);
                break;

            default:
                printf("Нет такого варианта\n");
                break;
        }
    }

    return 0;
}