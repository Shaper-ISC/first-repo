#include <stdio.h>
//Функции//
int sum(int numbrs[], int count) {
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += numbrs[i];
    }
    return sum;
}

int maximum(int numbrs[], int count) {
    int max = numbrs[0];
    for (int i = 0; i < count; i++)
    {
        if (numbrs[i] > max)
        {
            max = numbrs[i];
        }
    }
    return max;
}

int minumum(int numbrs[], int count) {
    int min = numbrs[0];
    for (int i = 0; i < count; i++)
    {
        if (numbrs[i] < min)
        {
            min = numbrs[i];
        }
    }
    return min;
}

int even(int numbrs[], int count){
    int e = 0;
    for (int i = 0; i < count; i++)
    {
        if (numbrs[i] % 2 == 0)
        {
            e++;
        }
    }
    return e;
}

float middle(int numbrs[], int count){
    float mid = 0;
    mid = (float)sum(numbrs, count) / (float)count;
    return mid;
}
//Вывод//
void output(int numbrs[], int count){
    printf("Сумма: %d\n", sum(numbrs, count));
    printf("Максимум: %d\n", maximum(numbrs, count));
    printf("Минимум: %d\n", minumum(numbrs, count));
    printf("Среднее: %.1f\n", middle(numbrs, count));
    printf("Количество четных: %d\n", even(numbrs, count));
}
//Основа//
int main() {
int numbrs[5]; int count = 0;
//Ввод//
    for (int i = 0; i < 5; i++, count++)
{
    printf("Введите %d-е чиcло: ", count+1);
    scanf("%d", &numbrs[i]);
}
//вывод//
output(numbrs, count);

return 0;
}