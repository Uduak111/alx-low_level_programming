#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
*(p + 5) = 98; /* This line sets the value at p + 5 to 98 */
printf("a[2] = %d\n", a[2]);
return (0);
}

