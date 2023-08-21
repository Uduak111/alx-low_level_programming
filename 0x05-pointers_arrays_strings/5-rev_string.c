#include "main.h" /* Make sure to include any necessary header files */

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
int length = 0;
    
/* Calculate the length of the string */
while (s[length] != '\0')
{
length++;
}
    
int start = 0;
int end = length - 1;
char temp;
    
/* Swap characters from start to end to reverse the string */
while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
        
start++;
end--;
}
}

