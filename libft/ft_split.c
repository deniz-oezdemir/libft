/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:18:54 by denizozd          #+#    #+#             */
/*   Updated: 2023/11/20 19:24:31 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char sep)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == sep)
			s++;
		if (*s)
			count++;
		while (*s && *s != sep)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_strs;
	size_t	word_len;
	int		i;

	arr_strs = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!s || !arr_strs)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			arr_strs[i] = ft_substr(s, 0, word_len);
			i++;
			s = s + word_len;
		}
	}
	arr_strs[i] = NULL;
	return (arr_strs);
}
