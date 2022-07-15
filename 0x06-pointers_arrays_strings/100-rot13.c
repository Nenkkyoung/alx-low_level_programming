#include "main.h"
/**
 * rot13 - function that reverses string using rot13
 * @s: string
 * Return: encoded string
 */
char *rot13(char *s)
{
	int x, y;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	chsr output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for ( = 0; s[x] != '\0'; x++)
	{
		for (y = 0; input[y] != '\0'; y++)
		{
			if (s[x] == input[y])
			{
				s[x] = output[y];
				break;
			}
		}
	}
	return (s);
}
