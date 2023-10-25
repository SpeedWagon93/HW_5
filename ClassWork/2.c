#include <stdio.h>

int main()
{
    int x = 0;
    int a = 200;
    for (int b = 100; b <= a; b++)
    {
        if(b%17 == 0)
        {
            x += b;
        }
    }
    printf("%d\n", x);
    return 0;
}