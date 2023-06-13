/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:07:09 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/06/08 17:13:12 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (str1[i] != 0 || str2[i] != 0))
	{
		if (str1[i] == str2[i])
			i++;
		else
			return ((unsigned char)(str1[i]) - (unsigned char)(str2[i]));
	}
	return (0);
}
// int main(void)
// {
//     char *s1 = "Hello";
//     char *s2 = "abc";
//     printf("%d\n", ft_strncmp(s1, s2, 3));
//     return (0);
// }