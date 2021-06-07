#include <stdio.h>

// “Value at Address”(*) Operator
void	ft_swap(int *a, int *b);

int main(void)
{
	int a, b;
	a = 7;
	b = 8;

	// “Address of”(&) Operator
	// para ft_swap envio os endereços das variaveis
	// declaradas acima (a, b)
	ft_swap(&a, &b);
	// a função ft_swap faz a inversão e testo se foi feito no if abaixo
	if (a == 8 && b == 7)
	{
		printf("\e[1;32mOK\e[0m");
	}
	else
	{
		printf("\e[1;31mKO\e[0m");
	}
    return 0;
}
