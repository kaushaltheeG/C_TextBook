
/*
    #define: line defines a smybolic nam eor symbolic constant to be a particular string of characters
        - #define name replacement text
    - any occurence of name will be replaced by the corresponding replacement text
    - th ename has the same form as a form as a variable name ~ a sequence of letters and digits that begins with a letter 
    - th ereplacement text can be any sequence of characters 
        - it is not limited to numbers
*/

#include <stdio.h>

#define LOWER 0    // lower limit of table
#define UPPER 300
#define STEP 20

main() {

    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}