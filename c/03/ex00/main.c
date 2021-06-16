#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int	ft_strcmp(char *s1, char *s2);

int	same_sign(int a, int b)
{
	if (a < 0 && b < 0)
		return (0);
	else if (a > 0 && b > 0)
		return (0);
	else if (a == 0 && b == 0)
		return (0);
	return (1);
}

int	main(void)
{
	printf("-- Exercício 00: ");
	char str0[] = "string";
	char str1[] = "string1";
	char str2[] = "abcdef";
	char str3[] = "fedcba";
	char str4[] = {-123, -56, 6, 32, 64, 65, 66, 0};
	char str5[] = "abcdefghijadofhiasdfj";
	char str6[] = "abcdefghijadfedcba";

	int ret0 = strcmp(str0, str1);
	int ret1 = ft_strcmp(str0, str1);

	if (same_sign(strcmp(str0, str1), ft_strcmp(str0, str1)))
		printf("KO t1, expected %i got %i\n", ret0, ret1);
	else if (same_sign((ret0 = strcmp(str1, str2)), (ret1 = ft_strcmp(str1, str2))))
		printf("KO t2, expected %i got %i\n", ret0, ret1);
	else if (same_sign((ret0 = strcmp(str2, str3)), (ret1 = ft_strcmp(str2, str3))))
		printf("KO t3, expected %i got %i\n", ret0, ret1);
	else if (same_sign((ret0 = strcmp(str3, str4)), (ret1 = ft_strcmp(str3, str4))))
		printf("KO t4, expected %i got %i\n", ret0, ret1);
	else if (same_sign((ret0 = strcmp(str5, str6)), (ret1 = ft_strcmp(str5, str6))))
		printf("KO t5, expected %i got %i\n", ret0, ret1);
	else
		printf("OK\n");
	return(0);
}
