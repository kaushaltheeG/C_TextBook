#include<stdio.h>

/* count digits, white space, others */
main() 
{
    int c, i, nwhite, nother;
    int ndigit[10]; // array of int with 10 open spaces

    nwhite = nother = 0;
    // initializing array with 0s
    for (i=0; i<10; ++i)
    {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != 'e') // was EOF 
    {
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t') // \t means something else
            ++nwhite;
        else 
            ++nother;
        
        printf("digits =");
        for (i = 0; i < 10; ++i)
        {
            printf(" %d", ndigit[i]);
        }
        printf(", white space = %d, other %d\n", nwhite, nother);
    }

    int hcount = 0;
    for (i = 0; i < 10; ++i)
    {
        printf("current count: %d", ndigit[i]);
        if (ndigit[i] > hcount)
            hcount = ndigit[i];
    }

    // print histogram
    int currentcount = hcount;
    int k;
    printf("highest digit count: %d\n", hcount);
    for (i = 0; i < hcount; ++i)
    {

        printf("%d |",currentcount);
        k = 0;
        for (k = 0; k < 10; ++k)
        {
            if (ndigit[i] == currentcount)
                printf("  H");
            else 
                printf("  ");
        }

        // printf("\n");
        printf("                              \n");
        --currentcount;
    }

    printf("----------------------------- \n");
    printf(" 0  1  2  3  4  5  6  7  8  9 \n");
    printf("          digits              \n");
    
}