/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 05:20:20 by acennadi          #+#    #+#             */
/*   Updated: 2024/07/08 05:23:03 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	rul;

	rul = 1;
	i = 0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > i)
	{
		rul *= nb;
		i++;
	}
	return (rul);
}
