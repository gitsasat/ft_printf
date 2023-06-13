/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:53:11 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/05/30 16:01:05 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
// int main()
// {
// 	const char haystack[] = "Hello, World!";
// 	// const char needle[] = "World";
// 	char *result = ft_strnstr(haystack, "word", 6);
// 	if (result != NULL)
// 	{
// 		printf("Needle found at position: %ld\n", result - haystack);
// 		printf("Remaining string: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("Needle not found in haystack.\n");
// 	}
//	return 0;
//}