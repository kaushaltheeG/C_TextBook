/*
    Celsius to Fahrenhiet
    C = (5/9)(f-32)
*/

#include <stdio.h>

/*
    print Fahrenhiet-Celsius table
    for fahr = 0, 20, ... , 300
*/

/*
    %d print as decimal integer
    %6d print as decimal integer, at least 6 chars wide
    %f print as floating point
    %6f print as floating point, 2 characters after decimal point
    %6.2f print as floating point, at least 6 wide and 2 decimal points
*/

int ftoc(int fahr);

main() 
{
    int lower = 0, upper = 300, increment = 20;
    int fahr = lower, celsius;

    while (fahr <= upper)
    {
        celsius = ftoc(fahr);
        printf("%d\t%d\n", fahr, celsius); // %d is placeholder for second and third arg; \t = tab
        fahr += increment;
    }
    
}

/* converts Fahrenhiet to Celsius */
int ftoc(int fahr)
{
    return (5 * (fahr - 32)) / 9;
}