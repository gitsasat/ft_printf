/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 23:43:39 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/06/14 00:15:39 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_putchar(char c, int *len)
{
	ft_putchar_fd (c, 1);
	(*len)++;
}

void	ft_putstring(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		*len += 6;
		return ;
	}

	while (str[i])
	{
		ft_putchar(str[i], len);
		i++;
	}
}
