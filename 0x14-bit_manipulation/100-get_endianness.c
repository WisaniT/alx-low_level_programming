#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *check_endian = (char *)&num;

	if (*check_endian)
		return (1); /* Little Endian */
	else
		return (0); /* Big Endian */
}
