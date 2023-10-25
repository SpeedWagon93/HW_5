#include <stdio.h>

int main()
{
    int x = 0;
    printf("Введите высоту желаемого треугольника: ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        for(int j = i; j < x; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= i*2-1; k++)
        {
            printf("^");
        }
        printf("\n");
    }

    return 0;
}