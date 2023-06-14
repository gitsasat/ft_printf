/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 00:13:44 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/06/14 17:35:58 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

char	*ft_uitoa(unsigned int n)
{
	char			*str;
	unsigned int	nb;
	int				len;

	nb = n;
	len = 1;
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	nb = n;
	while (len--)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}

void	ft_putnumber(int n, int *len)
{
	char	*nbr;

	nbr = ft_itoa(n);
	ft_putstring(nbr, len);
	free(nbr);
}

void	ft_putunumber(unsigned int n, int *len)
{
	char	*nbr;

	nbr = ft_uitoa(n);
	ft_putstring(nbr, len);
	free(nbr);
}

void	ft_puthex(unsigned int num, const char format, int *len)
{
	char	*hex;

	if (format == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (num >= 16)
		ft_puthex(num / 16, format, len);
	ft_putchar(hex[num % 16], len);
}

void	ft_putpointer(uintptr_t ptr, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (ptr >= 16)
		ft_putpointer(ptr / 16, len);
	if (ptr < 16)
	{
		ft_putstr_fd("0x", 1);
		*len += 2;
	}
	ft_putchar(base[ptr % 16], len);
}
