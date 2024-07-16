/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:41:26 by acennadi          #+#    #+#             */
/*   Updated: 2024/07/10 21:21:25 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ch7al(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
		;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*hna;
	int		i;
	int		x;

	x = ch7al(src);
	i = 0;
	hna = malloc(sizeof(char) * x);
	if (hna == NULL)
		return (NULL);
	while (src[i])
	{
		hna[i] = src[i];
		i++;
	}
	hna[i] = '\0';
	return (hna);
}
