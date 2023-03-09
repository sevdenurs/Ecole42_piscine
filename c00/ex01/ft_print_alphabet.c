/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setaskin <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:35:35 by setaskin          #+#    #+#             */
/*   Updated: 2023/02/02 14:02:44 by setaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	x;

	x = 'a';
	while (x >= 'a' && x <= 'z')
	{
		write (1, &x, 1);
			x++;
	}
}
/*
int main()
{
	ft_print_alphabet("42istanbul");
}
*\
