/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setaskin <setaskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:59:52 by setaskin          #+#    #+#             */
/*   Updated: 2023/02/25 19:59:58 by setaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	while (src[i])
		i++;
	copy = malloc((sizeof(char) * i) + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*output;
	int			i;

	i = 0;
	output = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!output)
		return (NULL);
	while (i < ac)
	{
		output[i].size = ft_strlen(av[i]);
		output[i].str = av[i];
		output[i].copy = ft_strdup(av[i]);
		i++;
	}
	output[i].str = 0;
	return (output);
}
