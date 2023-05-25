#include <unistd.h>


/**
 *_putchar write the character c to stdout
 * @c the character to print
 * Return: On succes 1.
 * On error return -1
 */

int _putchar(char c)
{

	return (write(1,&c,1));

}
