/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimoraes <fimoraes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 03:32:24 by fimoraes          #+#    #+#             */
/*   Updated: 2021/06/05 04:26:53 by fimoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	char	*arg1;
	char	*arg2;
	int		x;
	int		y;

	if (argc != 3)
	{
		printf("Faltaram argumentos\n");
		return (0);
	}
	arg1 = argv[1];
	arg2 = argv[2];
	x = atoi(arg1);
	y = atoi(arg2);
	rush(x, y);
	return (0);
}
