#include "putchar.h"
int main(void)
{
char *putchar = "Putchar";
while (*putchar)
{
_putchar(*putchar)
putchar++
}
_putchar('\n');
return (0);
}
