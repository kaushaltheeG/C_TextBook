
#include<stdio.h>
#include<stdbool.h>

#define MAXLINE 1000 /* maxium input line size */

int getlinecustom(char line[], int maxline);
void copy(char to[], char from[]);

/* prints the longest input line */
main()
{
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here*/

    max = 0;
    while ((len = getlinecustom(line, MAXLINE)) != EOF)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    
    if (max>0)
        printf("%s", longest); /* %s format specification to printf expects the correspondign arguments to be a string in this form */
    return 0;
}

/* reads the a set of text and prints the longest 
    Ex: hello -> [h,e,l,l,o,\n,\0]
*/
int getlinecustom(char s[], int max)
{
    int c, i;
    // bool isnoteof = (c = getchar()) != EOF;

    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; /* is the null char(val:0); C convention to indicate end of word*/
    return i;
}

/* copy 'from' into 'to'; assuming 'to' array is bih enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') // copys & checks to[i] value
        ++i;
}
