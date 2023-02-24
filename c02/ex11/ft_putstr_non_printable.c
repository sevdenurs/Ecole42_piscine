/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setaskin <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:56:40 by setaskin          #+#    #+#             */
/*   Updated: 2023/02/10 12:15:42 by setaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (ft_char_is_printable(str[a]) == 1)
			ft_putchar(str[a]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[a] / 16]);
			ft_putchar("0123456789abcdef"[str[a] % 16]);
		}
		a++;
	}
}
