/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:18:54 by denizozd          #+#    #+#             */
/*   Updated: 2023/11/16 11:31:06 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_create_substrs(char	**arr_strs, char const *s, char c)
{
	char const	*tmp;

	tmp = s;
	while (*tmp)
	{
		while (*s == c)
			s++;
		tmp = s;
		while (*tmp && *tmp != c)
			tmp++;
		if (*tmp == c || tmp > s)
		{
			*arr_strs = ft_substr(s, 0, tmp - s);
			s = tmp;
			arr_strs++;
		}
	}
	*arr_strs = NULL;
}
	
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
	int		word_count;
	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	arr_strs = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!arr_strs)
		return (NULL);
	ft_create_substrs(arr_strs, s, c);
	return (arr_strs);
}	
