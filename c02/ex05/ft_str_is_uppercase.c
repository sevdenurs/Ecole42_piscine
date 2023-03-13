/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setaskin <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:58:27 by setaskin          #+#    #+#             */
/*   Updated: 2023/02/09 18:40:25 by setaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 'A' && str[a] <= 'Z'))
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
	printf("%d", ft_str_is_uppercase("SDLASKLDA"));
}
*\

