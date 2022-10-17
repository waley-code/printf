/**
* _strlen - counts the length of string.
* @s: Value string check.
* Return: String.
*/

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		i++;
	}
	return (i);
}
