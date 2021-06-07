/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimoraes <fimoraes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 00:01:41 by fimoraes          #+#    #+#             */
/*   Updated: 2021/06/06 15:00:01 by fimoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	choose_char(int row, int col, int x, int y)
{
	if ((row == 1 && col == 1) || (row == y && col == 1))
		ft_putchar('A');
	else if ((row == 1 && col == x) || (row == y && col == x))
		ft_putchar('C');
	else if (row == 1 || row == y || col == 1 || col == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x < 1 || y < 1 || x > 2147483647 || y > 2147483647)
		return ;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			choose_char(row, col, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
	ft_putchar('\n');
}
