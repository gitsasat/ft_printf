/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:48:58 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/05/30 13:27:41 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	copy_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	if (dstsize <= src_len)
	{
		copy_len = dstsize - 1;
	}
	else
	{
		copy_len = src_len;
	}
	ft_memcpy(dst, src, copy_len);
	dst[copy_len] = '\0';
	return (src_len);
}
// int main(void)
// {
// 	char src[] = "Hello, world!";
// 	char dst[10];
// 	size_t result = ft_strlcpy(dst, src, sizeof(dst));
// 	printf("Source string: %s\n", src);
// 	printf("Copied string: %s\n", dst);
// 	printf("Result: %zu\n", result);
// 	return (0);
// }