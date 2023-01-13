#include <stdio.h>

void main()
{
    char x = 'A', *pchar = &x;
    int y = 10, *pint = &y;
    float z = 5.5, *pfloat = &z;
    printf("Char: %c \nInt: %d \nFloat: %.2f", *pchar, *pint, *pfloat);
    *pchar = 'T';
    *pint = 100;
    *pfloat = 25.44;
    printf("\n\nChar: %c \nInt: %d \nFloat: %.2f", *pchar, *pint, *pfloat);
}
