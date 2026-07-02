#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h>   // time()

//Вывод
void print_guesses(int arr[], int count){
    printf("Верно: %d\n", arr[count]);
    printf("Попыток было: %d\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("Попытка %d: %d\n", i+1, arr[i]);
    }
}
//Основа
int main() {
    srand(time(NULL));
    int secret_number = rand() % 100 + 1;
    int count = 0;
    int guesses[100];

    while(1) {
        printf("Введите число: ");
        scanf("%d", &guesses[count]);

        if (guesses[count] > secret_number)
        {
            printf("Меньше\n");
            count++;
        }
        else if (guesses[count] < secret_number)
        {
            printf("Больше\n");
            count++;
        }
        else if (guesses[count] == secret_number) 
        {
            count++;
            print_guesses(guesses, count);
            break;
        } 
    }

    return 0;
}