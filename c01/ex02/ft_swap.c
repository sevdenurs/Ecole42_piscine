/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setaskin <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:49:04 by setaskin          #+#    #+#             */
/*   Updated: 2023/02/06 13:50:05 by setaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>
int	main()
{
	int	x;
	int	y;
	
	x = 8;
	y = 4;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
}
*\
