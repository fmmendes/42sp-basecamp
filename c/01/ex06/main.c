#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);

int main(void)
{
	const char* str1 = "Mussum Ipsum";
	const char* str2 = "Lasanha";
	if ((int) strlen(str1) == ft_strlen((char*) str1) && (int) strlen(str2) == ft_strlen((char*) str2))
	{
		printf("\e[1;32mOK\e[0m");
	}
	else
	{
		printf("\e[1;31mKO\e[0m");
	}
    return 0;
}
