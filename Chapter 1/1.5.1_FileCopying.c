
#include<stdio.h>

/*
    read a character

    while (character is not end of fiel indicator)
        output the character just read
        read a character
*/


// copy input into output
main() {
    int c;

    c = getchar();
    // EOF = end of file; an int stored in stdio.h
    while(c != EOF) {
        putchar(c);
        c = getchar();
    }
}
