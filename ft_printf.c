/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 21:57:43 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/06/14 01:52:38 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats_check(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		ft_putchar(va_arg(args, int), &len);
	else if (format == 's')
		ft_putstring(va_arg(args, char *), &len);
	// else if (format == 'p')
 	// 	ft_
	else if (format == 'd' || format == 'i')
		ft_putnumber(va_arg(args, int), &len);
	else if (format == 'u')
		ft_putunumber(va_arg(args, unsigned int), &len);
	else if (format == 'x' || format == 'X')
		ft_puthex(va_arg(args, unsigned int), format);
	else if (format == '%')
		ft_putchar('%', &len);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start (args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_formats_check(args, str[i]);
		}
		else
			ft_putchar (str[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
int	main() 
{
	// int value = 10;
    // int* ptr = &value;
    // printf("Pointer address: %p\n", (void*)ptr);
    // return 0;
	 ft_printf ("test:%x\n", 32);
	 printf ("test:%x\n", 32);
	return 0;
}