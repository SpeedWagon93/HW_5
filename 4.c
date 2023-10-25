#include <stdio.h>

#define MIN(x, y) ( x > y ? printf("%d\n", y) : printf("%d\n", x))

int main()
{
    int x = 0;
    int y = 0;
    printf("Введите 1-e число: ");
    scanf("%d", &x);
    printf("Введите 2-e число: ");
    scanf("%d", &y);
    MIN(x, y);
    return 0;
}