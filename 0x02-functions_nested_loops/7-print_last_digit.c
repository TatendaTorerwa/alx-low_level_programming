#include "main.h"

/**
*print_last_digit - prints the last digit of a number
*
*@z: integer arg
*
*Description: "prints the last digit of a number"
*
*Return: always 0 (success)
*/

int print_last_digit(int z)

{

int ld;
ld = z % 10;
if (z <= 0)

{
_putchar(-ld + 48);

return (-ld);

}

else

{
_putchar(ld + 48);

return (ld);

}

}


