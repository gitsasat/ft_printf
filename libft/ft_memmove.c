/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:56:04 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/06/08 17:19:31 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}
// int main()
// {
// 	char str[] = "Hello, World!";
// 	char str2[] = "Hello, World!";
// 	printf("Before copy: %s\n", str);
// 	// Copy the substring "World!" to the beginning of the string
// 	ft_memmove(str +1, str, 7);
// 	memmove(str2 +1, str2, 7);
// 	printf("After copy:  %s\n", str);
// 	printf("After copy:  %s\n", str2);
// }
