#include<stdio.h>

/* count lines in input */
main() 
{
    int c, n1;
    n1 = 0;
    while ((c = getchar()) != EOF)
        printf("%d\n", c);
        if (c == 'a')
            ++n1;
    printf("%d\n", n1);
}