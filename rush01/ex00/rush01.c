/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoskun <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:12:08 by acoskun           #+#    #+#             */
/*   Updated: 2023/02/05 19:07:00 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_print(int satir, char satirbas, char satirorta, char satirsonu)
{
	int	satirindex;

	satirindex = 1;
	while (satirindex <= satir)
	{
		if (satirindex == 1)
			ft_putchar(satirbas);
		else if (satirindex == satir)
			ft_putchar(satirsonu);
		else
			ft_putchar(satirorta);
		satirindex++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	sutunindex;

	sutunindex = 1;
	if (x >= 1 && y >= 1)
	{
		while (sutunindex <= y)
		{
			if (sutunindex == 1)
				ft_print(x, '/', '*', '\\');
			else if (sutunindex == y)
				ft_print(x, '\\', '*', '/');
			else
				ft_print(x, '*', ' ', '*');
			sutunindex++;
		}
	}
	else
	{
		write(1, "DEĞERLERİNİ KONTROL ET DOSTUM 0 VE ALTINI GİREMEZSİN!!!", 62);
	}
}
