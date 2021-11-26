#include <stdio.h>
#include <cs50.h>


int main (void)
{
    int N, K;

    N = get_int ("Кількість поверхів: ");
    K = get_int ("Люди на 1-му поверсі: ");


    int array[N];
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        array[i] = K + (i * 4);
        printf("%i ", array[i]);
        sum += array[i];
    }
    printf("\n");
    printf("Людей натискає кнопку на 1-ому поверсі: %d\n", sum - K);

}