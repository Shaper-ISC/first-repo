#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_guesses(int *start, int *end)
{
    printf("Попыток было: %ld\n", end - start);

    int i = 1;
    while (start < end)
    {
        printf("Попытка %d: %d\n", i, *start);
        start++;
        i++;
    }
}

int main()
{
    srand(time(NULL));
    int secret_number = rand() % 100 + 1;

    int guesses[100];
    int *start = guesses;
    int *p = guesses;

    while (1)
    {
        printf("Введите число: ");
        scanf("%d", p);

        if (*p > secret_number)
        {
            printf("Меньше\n");
        }
        else if (*p < secret_number)
        {
            printf("Больше\n");
        }
        else
        {
            printf("Верно: %d\n", *p);

            print_guesses(start, p + 1);
            break;
        }

        p++;
    }

    return 0;
}