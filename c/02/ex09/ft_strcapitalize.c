char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 0;
	while (str[i] != '\0')
	{
		if (capitalize == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			capitalize++;
		}
		else if (capitalize > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			capitalize = 0;
		else
			capitalize++;
		i++;
	}
	return (str);
}
