/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:21:53 by acennadi          #+#    #+#             */
/*   Updated: 2024/07/10 21:21:54 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	value;
	int	i;
	int	*p;

	i = 0;
	value = max - min;
	p = (int *)malloc(sizeof(int) * value);
	if (max <= min)
		return (NULL);
	if (!p)
		return (NULL);
	while (i < value)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
