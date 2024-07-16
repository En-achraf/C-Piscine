/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:22:02 by acennadi          #+#    #+#             */
/*   Updated: 2024/07/10 22:03:43 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	lenv3(char **strs, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i++ > size)
	{
		j = 0;
		while (strs[i - 1][j++])
			count++;
	}
	return (count);
}

int	lens(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*p;

	i = 0;
	if (size == 0 || strs == NULL)
	{
		p = (char *)malloc(1);
		if (p)
			p[0] = '\0';
		return (p);
	}
	len = lenv3(strs, size) + (size - 1) * lens(sep) + 1;
	p = (char *)malloc(sizeof(char) * len);
	if (!p)
		return (0);
	p[0] = '\0';
	while (i < size)
	{
		if (i != 0)
			ft_strcat(p, sep);
		ft_strcat(p, strs[i]);
		i++;
	}
	return (p);
}
