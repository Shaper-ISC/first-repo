#include <stdio.h>
int main() {
    int day;
    printf("от 1 до 7\n0 - выход\n");
    printf("Введите число: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
        printf("Понедельник\n");
        break;
        case 2:
        printf("Вторник\n");
        break;
        case 3:
        printf("Среда\n");
        break;
        case 4:
        printf("Четверг\n");
        break;
        case 5:
        printf("Пятница\n");
        break;
        case 6:
        printf("Суббота\n");
        break;
        case 7:
        printf("Воскресенье\n");
        break;
        case 0:
        printf("Программа завершается\n");
        break;
        default:
        printf("Такого дня недели нет\n");
        break;
    }
    return 0;
}
