/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:15:45 by acennadi          #+#    #+#             */
/*   Updated: 2024/07/06 17:14:47 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	achraf;
	int	samir;

	i = 0;
	achraf = 1;
	samir = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			achraf *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		samir = samir * 10 + (str[i] - 48);
		i++;
	}
	return (achraf * samir);
}
