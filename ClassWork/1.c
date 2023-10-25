#include <stdio.h>

int main()
{
    
    int b = 87;

    for (int a = 35; a <= b; a++)
    {
        if(a%7 == 1 || a%7 == 2 || a%7 == 5)
        {
            printf("%d\n", a);
        }
    }
}