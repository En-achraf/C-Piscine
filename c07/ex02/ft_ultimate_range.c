/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:21:58 by acennadi          #+#    #+#             */
/*   Updated: 2024/07/10 21:23:33 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	value;
	int	*list;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	value = max - min;
	list = malloc(sizeof(int) * value);
	if (!list)
	{
		return (-1);
	}
	*range = list;
	while (i < value)
	{
		list[i] = min + i;
		i++;
	}
	return (value);
}
