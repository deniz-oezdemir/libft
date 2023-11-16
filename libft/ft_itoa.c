/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:42:40 by denizozd          #+#    #+#             */
/*   Updated: 2023/11/16 13:25:01 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	int		front;
	int		back;
	char	*str;

	front = 0;
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
		front = 2;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		front = 1;
	}
	back = len - 1;
	while (back > front)
	{
		str[back] = n % 10 + '0';
		n = n / 10;
		back--;
	}
	str[len] = '\0';
	return (str);
}
