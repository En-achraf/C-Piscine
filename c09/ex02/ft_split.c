/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:40:01 by acennadi          #+#    #+#             */
/*   Updated: 2024/07/17 18:20:14 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	sep(char c, char *sp)
{
	int	i;

	i = 0;
	while (sp[i])
	{
		if (sp[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	word(char *str, char *sp)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 1;
	while (str[i])
	{
		if (sep(str[i], sp))
		{
			flag = 1;
		}
		else
		{
			if (flag == 1)
			{
				count++;
				flag = 0;
			}
		}
		i++;
	}
	return (count);
}

char	*ft_strdup(char *src, char *set)
{
	int		i;
	char	*p;

	i = 0;
	while (src[i] && !sep(src[i], set))
		i++;
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (src[i] && !sep(src[i], set))
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**copy;
	int		wd;

	i = 0;
	wd = word(str, charset);
	copy = (char **)malloc(sizeof(char *) * (wd + 1));
	if (!copy)
		return (NULL);
	while (*str)
	{
		if (!sep(*str, charset))
		{
			copy[i] = ft_strdup(str, charset);
			i++;
			while (*str && !sep(*str, charset))
				str++;
		}
		else
			str++;
	}
	copy[i] = NULL;
	return (copy);
}
