/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:27:58 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/05/30 16:26:11 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	k = j - i + 1;
	if (k == 0)
		str = (char *)malloc(sizeof(char));
	else
		str = (char *)malloc(sizeof(char) * (k + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1 + i, k + 1);
	return (str);
}
// int main()
// {
// 	char *s1 = "";
// 	char *set = "H";
// 	char *result = ft_strtrim(s1, set);
// 	if (result == NULL)
// 	 {
// 		printf("Memory allocation failed.\n");
// 		return 1;
// 	}
// 	printf("Joined string: %s\n", result);
// 	free(result);
// 	return 0;
// }