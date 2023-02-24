/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setaskin <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:42:42 by setaskin          #+#    #+#             */
/*   Updated: 2023/02/16 19:11:13 by setaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	sonuc;

	sonuc = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb >= 1)
	{
		sonuc = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (sonuc);
}
