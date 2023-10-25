#include <stdio.h>

int main()
{
    int x = 200;
    
    while(1)
    {
       if(x%17 == 0)
        {
            printf("%d\n", x);
            break;
        }
        else
        {
            x++;
        }
    }
    return 0; 
}
    