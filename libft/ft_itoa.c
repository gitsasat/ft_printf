/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:25:29 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/06/07 18:04:43 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	abs_value(long n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static int	get_length(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		size;

	size = get_length(n);
	dest = (char *) malloc (size + 1);
	if (dest == 0)
		return (NULL);
	dest[size] = '\0';
	if (n < 0)
		dest[0] = '-';
	if (n == 0)
		dest[0] = '0';
	while (n != 0)
	{
		size--;
		dest[size] = (abs_value(n) % 10) + '0';
		n = n / 10;
	}
	return (dest);
}
// int main ()
// {
// 	int n = -2147483648;
// 	char *str = ft_itoa(n);
// 	printf("%s\n", str);
// 	return (0);
// }