#include <stdio.h>

int main()
{
    int x = 0;
    int y = 1;
    printf("Введите число, являющееся факториалом: ");
    scanf("%d", &x);
    while(x/y != 1)
    {
        x /= y;
        y++;
    }
    printf("%d\n", y);
    return 0; 
}