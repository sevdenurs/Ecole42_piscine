/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setaskin <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:03:44 by setaskin          #+#    #+#             */
/*   Updated: 2023/02/18 12:41:17 by setaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	a;

	a = 0;
	while (argv[0][a] != '\0' && argc)
	{
		ft_putchar(argv[0][a]);
		++a;
	}
	ft_putchar('\n');
	return (0);
}
