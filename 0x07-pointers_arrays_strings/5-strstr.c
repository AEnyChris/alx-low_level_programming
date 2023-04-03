#include <stddef.h>
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to search for
 *
 *
 * Return: pointer to beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
