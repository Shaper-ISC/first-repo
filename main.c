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

int middle(int numbrs[], int count){
    int mid = 0;
    mid = sum(numbrs, count) / count;
    return mid;
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
printf("Сумма: %d\n", sum(numbrs, count));
printf("Максимум: %d\n", maximum(numbrs, count));
printf("Минимум: %d\n", minumum(numbrs, count));
printf("Среднее: %d\n", middle(numbrs, count));
printf("Количество четных: %d\n", even(numbrs, count));

return 0;
}