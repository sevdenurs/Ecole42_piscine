/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setaskin <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:08:51 by setaskin          #+#    #+#             */
/*   Updated: 2023/02/10 11:28:47 by setaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 32 && str[a] <= 126))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_str_is_printable("\n\t"));
}
*\
