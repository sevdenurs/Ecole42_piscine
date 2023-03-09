/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setaskin <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:49:53 by setaskin          #+#    #+#             */
/*   Updated: 2023/02/02 14:04:10 by setaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	x;	

	x = 'z';
	while (x <= 'z' && x >= 'a')
	{
		write (1, &x, 1);
			x--;
	}
}

/*
int main()
{
	ft_reverse_alphabet("istanbul");
}
*\
