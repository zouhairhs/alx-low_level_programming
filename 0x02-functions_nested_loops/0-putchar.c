#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}

int main(void)
{
  _putchar('H');
  _putchar('e');
  _putchar('l');
  _putchar('l');
  _putchar('o');
  _putchar('\n');
  return (0);
}
