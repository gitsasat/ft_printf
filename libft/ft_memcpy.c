/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:17:40 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/05/30 14:26:07 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
// int main(void)
// {
// 	char str1[50] = "mnopqr";
// 	char str2[50] = "abcdef";
// 	printf("\nBefore memcpy(): %s\n", str1);
// 	ft_memcpy(str1 + 2, str2, 2);
// 	printf("After memcpy():  %s", str1);
// 	return 0;
// }