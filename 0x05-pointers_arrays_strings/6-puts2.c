#include "main.h" /* Make sure to include any necessary header files */

/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]); /* Print the current character */

i += 2; /* Move to the next character with a step of 2 */
}

_putchar('\n'); /* Print a new line after printing characters */
}

int main(void)
{
char input[] = "Lrmismdlrstae,cnettraiicn lt e oeumdtmo niiutu aoee ooemgaaiu.U nma ii eim usnsrdeectto lac aoi iiu lqi xe omd osqa.Di ueiuedlri erhnei nvlpaevltes ilmdlr ufga ul aitr xetu itocea uiaa o riet uti up u fii eeutmli nmi s aou.Hletn";

puts2(input);

return 0;
}

