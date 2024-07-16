/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:12:13 by acennadi          #+#    #+#             */
/*   Updated: 2024/07/06 17:29:26 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ma3raftch(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	alchorta(char *str)
{
	int	i;
	int	j;
	int	ch7al;

	i = 0;
	ch7al = ma3raftch(str);
	if (ch7al < 2)
		return (0);
	while (str[i])
	{
		if (!((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'A'
					&& str[i] >= 'Z') || (str[i] <= '9' && str[i] >= '0')))
			return (0);
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (j < ch7al)
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		ch7al;
	int		roles;

	nb = nbr;
	roles = alchorta(base);
	ch7al = ma3raftch(base);
	if (roles == 1)
	{
		ch7al = ma3raftch(base);
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < ch7al)
			ft_putchar(base[nb]);
		if (nb >= ch7al)
		{
			ft_putnbr_base((nb / ch7al), base);
			ft_putnbr_base((nb % ch7al), base);
		}
	}
}
