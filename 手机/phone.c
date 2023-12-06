#include "phone.h"
int CountPhone(char str[LEN + 1])
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' 
			|| str[i] == 'a' 
			|| str[i] == 'd' 
			|| str[i] == 'g' 
			|| str[i] == 'j'
			|| str[i] == 'm'
			|| str[i] == 'p'
			|| str[i] == 't'
			|| str[i] == 'w')
		{
			count++;
		}
		else if (str[i] == 'b'
			|| str[i] == 'e'
			|| str[i] == 'h'
			|| str[i] == 'k'
			|| str[i] == 'n'
			|| str[i] == 'q'
			|| str[i] == 'u'
			|| str[i] == 'x')
		{
			count += 2;
		}
		else if (str[i] == 'c'
			|| str[i] == 'f'
			|| str[i] == 'i'
			|| str[i] == 'l'
			|| str[i] == 'o'
			|| str[i] == 'r'
			|| str[i] == 'v'
			|| str[i] == 'y')
		{
			count += 3;
		}
		else if (str[i] == 's'
			|| str[i] == 'z')
		{
			count += 4;
		}
	}
	return count;
}