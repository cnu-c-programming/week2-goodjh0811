#include <stdio.h>

int main()
{
    int i, j;
    for(i =  1; i <= 9; i++) {
        for(j = i; j <= 9; i++) {
            printf("%d * %d = %d\n", i, j, i*j);
        }
    }

    return 0;
}

