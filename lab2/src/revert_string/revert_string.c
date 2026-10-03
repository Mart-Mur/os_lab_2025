#include <string.h>
#include "revert_string.h"

void RevertString(char *str)
{
	int str_len = strlen(str);
	char str_element;
	for (int i = 0; i < (int)(str_len / 2); i++)
	{
		str_element = *(str + i);
		*(str + i) = *(str + str_len - 1 - i);
		*(str + str_len - 1 - i) = str_element;
	}
}

