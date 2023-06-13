/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:36:01 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/06/09 21:37:37 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c_p;

	c_p = '\0';
	c_p = (char)c;
	i = 0;
	while (s[i] != c_p && s[i] != '\0')
		i++;
	if (s[i] == c_p)
		return ((char *)s + i);
	return (0);
}
// int main()
// {
// 	char str[50] = "GeeksorGeeks is for programming geeks.";
// 	char str2[50] = "GeeksorGeeks is for programming geeks.";
// 	char *test1;
// 	char *test2;
// 	test1=ft_strchr(str, "for");
// 	test2=strchr(str2, );
// 	printf("String after |%c| is - |%s|\n", 'F',test1);
// 	printf("String after |%c| is - |%s|\n", 'F',test2);
// 	return 0;
// }