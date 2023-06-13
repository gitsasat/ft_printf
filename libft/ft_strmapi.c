/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:50:53 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/05/30 15:40:44 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s || !f)
		return (NULL);
	res = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
// char    ft_add(unsigned int i, char c)
// {
// 	return (c + i);
// }
// int main()
// {
// 	char *s = "Hello";
// 	char (*f)(unsigned int, char);
// 	f = &ft_add;
// 	char *result = ft_strmapi(s, f);
// 	printf("%s\n", result);
// 	free(result);
// 	return 0;
// }