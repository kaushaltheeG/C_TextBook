
#include<stdio.h>
#include<stdbool.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word*/

/* count lines, words, and chars in input */

main() {
    /*character, number of line, number of word, number of characters*/
    int c, nl, nw, nc, state;
    bool isnewline = false, isfirstword = false;
    state = OUT;

    nl = nw = nc = 0;
    // isnewline, isfirstword = false;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
            isnewline = true;

        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
            state = IN;
            ++nw;
            if (isnewline)
                isfirstword = true;
        
        if (isnewline && isfirstword)
        {
            printf("One word per line: nl: %d, nw: %d\n", nl, nw);
            isnewline = false; 
            isfirstword = false;

        }
        
        printf("%d %d %d\n", nl, nw, nc);
    }

    
}

character() {

}