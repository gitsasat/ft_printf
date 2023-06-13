/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:25:42 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/05/27 19:31:17 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = (char *)malloc(sizeof(char) * (ft_strlen (s1) + 1));
	if (s2 == NULL)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
// int main()
// {
// 	char *str;
// 	char *str2;
// 	str = ft_strdup("This is string.h library function");
// 	str2 = strdup("This is string.h library function");
// 	printf("String is: %s\n", str);
// 	printf("String is: %s\n", str2);
// 	free(str);
// 	free(str2);
// 	return 0;
// }