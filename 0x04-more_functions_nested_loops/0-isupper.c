#include <stdio.h>


int _isupper(int c)
{
/* Check if the character is within the ASCII range of uppercase letters (A-Z) */
return (c >= 'A' && c <= 'Z') ? 1 : 0
}
