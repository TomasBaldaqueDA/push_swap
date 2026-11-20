/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:27:58 by toafonso          #+#    #+#             */
/*   Updated: 2026/11/06 15:06:54 by toafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int		in_word;
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (in_word == 0 && s[i] != c)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static void	*free_all(char **list, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(list[i]);
		i++;
	}
	free(list);
	return (NULL);
}

static char	**fill_list(char **list, char const *s, char c)
{
	size_t	i;
	size_t	k;
	size_t	start;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			list[k] = ft_substr(s, start, i - start);
			if (!list[k])
				return (free_all(list, k));
			k++;
		}
	}
	list[k] = NULL;
	return (list);
}

char	**ft_split(char const *s, char c)
{
	char	**list;

	if (!s)
		return (NULL);
	list = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!list)
		return (NULL);
	return (fill_list(list, s, c));
}
