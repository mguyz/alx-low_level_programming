#include "main.h"

/**
 * _isalpha - checks for alphabeti letters
 * @c: a charter to be checked on
 *Return: returns 0 or 1
 */

int _isalpha(int c)
{
	return ((c > 'a' && c < = 'z') || (c > = 'A' && c < = 'Z'));
}
