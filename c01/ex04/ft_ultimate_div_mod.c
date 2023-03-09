/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setaskin <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:44:54 by setaskin          #+#    #+#             */
/*   Updated: 2023/02/06 14:08:25 by setaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

/*
#include <stdio.h>
int main()
{
	int	x;
	int	y;

	x = 15;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("%d | %d", x, y);
}
*\
