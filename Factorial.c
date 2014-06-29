#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j, fact;
    for(i = 1; i <= 7; i++)
    {
        fact = 1;
        for(j = 1; j <= i; j++)
        {
            fact = fact *j;
            if(j != i)
                printf("%d * ", j);
            else
                printf("%d = ", j);
        }
        printf("%d\n",fact);
    }
    
    return 0;
}
