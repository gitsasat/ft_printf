/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:47:40 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/06/09 20:53:39 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*last_occurrence;
	char	c_p;

	len = ft_strlen(s);
	last_occurrence = NULL;
	c_p = (char)c;
	if (c_p == '\0')
		return (ft_strchr(s, '\0'));
	while (len > 0)
	{
		if (s[len - 1] == c_p)
		{
			last_occurrence = (char *)(s + len - 1);
			break ;
		}
		len--;
	}
	return (last_occurrence);
}

//  int main()
//  {
// 	 	char str[] = "Hello, World!";
// 	char ch = 'l';

// 	char *result = ft_strrchr(str, ch);

// 	if (result)
// 		printf("Character '%c' found at position: %ld\n", ch, result - str);
// 	else
// 		printf("Character '%c' not found in the string.\n", ch);

// 	return 0;
//  }