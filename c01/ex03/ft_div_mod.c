/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setaskin <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:55:59 by setaskin          #+#    #+#             */
/*   Updated: 2023/02/06 13:53:48 by setaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main()
{
	int a;
	int b;
	int x;
	int y;

	a = 10;
	b = 5;
	ft_div_mod(a, b, div, mod);
	printf("%d\n", x);
	printf("%d", y);
}
*\
