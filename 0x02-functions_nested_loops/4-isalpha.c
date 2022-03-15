#include "main.h"

/**
 * _isalpha - checks for alphabetic
 * character
 * @c: checks character
 * Return: 1 if letter 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
