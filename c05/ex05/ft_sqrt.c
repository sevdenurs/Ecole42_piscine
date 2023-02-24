/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setaskin <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:47:03 by setaskin          #+#    #+#             */
/*   Updated: 2023/02/17 13:18:03 by setaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_sqrt(int nb)
{
	long	index;
	long	a;

	a = nb;
	if (a <= 0)
	{
		return (0);
	}
	if (a == 1)
	{
		return (1);
	}
	index = 2;
	if (a >= 2)
	{
		while (index * index <= a)
		{
			if (index * index == a)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
