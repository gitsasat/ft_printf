/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:08:43 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/06/03 20:30:23 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	if (dst == NULL && size == 0)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	j = dst_len;
	if (size > 0 && dst_len < (size - 1))
	{
		while (src[i] != 0 && dst_len + i < (size - 1))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = 0;
	}
	if (dst_len < size)
		return (dst_len + src_len);
	else
		return (size + src_len);
}
// size_t    ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
//     size_t    dst_len;
//     size_t    src_len;
//     size_t    i;
//     dst_len = 0;
//     src_len = 0;
//     i = 0;
//     while (src[src_len])
//         src_len++;
//     if (dstsize == 0)
//         return (src_len);
//     while (dst[dst_len])
//         dst_len++;
//     if (dstsize <= dst_len)
//         return (src_len + dstsize);
//     while (src[i] && dst_len + i < dstsize - 1)
//     {
//         dst[dst_len + i] = src[i];
//         i++;
//     }
//     dst[dst_len + i] = '\0';
//     return (dst_len + src_len);
// }
// int main()
// {
//     char buffer[20] = "Hello";
//     const char* null_ptr = NULL;
//     size_t result;
//     result = ft_strlcat(buffer, null_ptr, 0);
//     printf("Result: %zu\n", result);
//     printf("Buffer: %s\n", buffer);
//     return 0;
// }