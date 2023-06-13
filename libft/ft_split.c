/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:00:30 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/06/08 17:47:25 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c);
static char		*fill_words(const char *s, char c);

char	**ft_split(const char *s, char c)
{
	int		n_words;
	char	**split;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	n_words = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!split)
		return (NULL);
	while (i < n_words)
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		split[i] = fill_words(&s[j], c);
		while (s[j] != c && s[j] != '\0')
			j++;
		i++;
	}
	split[i] = NULL;
	return (split);
}

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	trigger;

	i = 0;
	count = 0;
	trigger = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (s[i] == c)
			trigger = 0;
		i++;
	}
	return (count);
}

static char	*fill_words(const char *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
		word[i] = '\0';
	while (&s[i--] != s)
		word[i] = s[i];
	return (word);
}
// int main()
// {
// 	char *str = " a b c";
// 	char **tab = ft_split(str, ' ');
// 	int i = 0;
// 	while (i < 4)
// 	{ 
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
