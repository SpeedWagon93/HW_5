#include <stdio.h>

int main()
{
    int x = 13;

    for (int y = 26; y <= 99; y += 13)
    {
        if(y%2 != 0)
        {
            x *= y;
        }
    }
printf("%d\n", x);

}