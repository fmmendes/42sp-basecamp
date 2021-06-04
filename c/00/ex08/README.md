Se existir uma forma mais simples alguém me avisa :smile:
```c
#include <unistd.h>

void	ft_putchar(char c) //Função do ex00, usei em todo o C00
{
	write(1, &c, 1);
}

void	ft_print_range(int *range, int n) // range = {0,1} e n = 2
{
	int	i;
	int	display;

	display = 1;
	i = 0;
	while (++i < n) // 0 ++ -> 1 < 2 -> true
		if (range[i - 1] >= range[i]) // range[0] >= range[1] | 0 >= 1
			display = 0;
	if (!display)
		return ;
	i = -1;
	while (++i < n)
		ft_putchar(range[i] + 48);
	if (range[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

// vamos imaginar que n foi passado como 2
void	ft_print_combn (int n)
{
	int	i; 
	int	range[10]; // vetor para armazenar os algarismos a serem impressos o 10 é o limite de um integer (2147483647)

	if (n > 10 || n < 0) // (0 < n < 10)  (2 > 10 || 2 < 0) -> false
		return ;
	i = -1; // inicializo o contador
	while (++i < n) // -1 ++ -> 0 | 0 < 2 -> true | 1 < 2 ->true | 2 < 2 -> false
		range[i] = i; // range[0] = 0 | range[1] = 1
	while (range[0] <= (10 - n) && n >= 1) // range[0] <= (10 - 2) && 2 >= 1 -> true
	{
		ft_print_range(range, n); // GOTO ft_print_range({0,1}, 2)
		if (n == 10)
			break ;
		range[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (range[i] > 9)
			{
				range[i - 1]++;
				range[i] = 0;
			}
		}
	}
}

```