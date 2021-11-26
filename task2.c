#include <stdio.h>

int main (void)
{
    int a;
    int N_max, N_min;

    int max, min;
    
    printf("Введіть розмір масиву: ");
    scanf("%i", &a);

    int N[a];
    

    for (int i = 0; i < a; i++)
    {
        printf("Елемент %d = ", i + 1);
        scanf("%i", &N[i]);
    }

    max = N[0];
    
    for (int i = 0; i < a; i++)
    {
        if (max < N[i])
        {
            max = N[i];
            N_max = i;
        }
        else if (min > N[i])
        {
            min = N[i];
            N_min = i;
        }
    }
    
    N[N_min] = max;
    N[N_max] = min;
    
    for (int j = 0; j < a; ++j)
    {
        printf("%i ", N[j]);
    }
    
    return 0;
}