/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setaskin <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:26:06 by setaskin          #+#    #+#             */
/*   Updated: 2023/02/18 13:37:04 by setaskin         ###   ########.fr       */
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
	int	b;

	b = 1;
	while (b < argc)
	{
		a = 0;
		while (argv[b][a] != '\0')
		{
			ft_putchar(argv[b][a]);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
	return (0);
}
