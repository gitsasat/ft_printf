/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:57:07 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/06/09 21:26:11 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
// int main()
// {
// 	char *str;
// 	char *str2;
//
// 	str = (char *)ft_calloc(25, sizeof(char));
// 	str2 = (char *)calloc(25, sizeof(char));
// 	strcpy(str, "This is string.h library function");
// 	printf("String is: %s\n", str);
// 	free(str);
// 	return 0;
// }