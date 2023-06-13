/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:08:33 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/05/28 17:57:39 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int				i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (ptr1[i] == ptr2[i] && i < (int)(n - 1))
		i++;
	return (ptr1[i] - ptr2[i]);
}
// int main()
// {
//     char *s1 = "Hello";
//     char *s2 = "Hello";
//     printf("%d\n", ft_memcmp(s1, s2, 5));
//      printf("%d\n", memcmp(s1, s2, 5));
//     return (0);
// }