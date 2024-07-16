/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:55:43 by acennadi          #+#    #+#             */
/*   Updated: 2024/07/02 20:30:18 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	tba3(char c)
{
	write(1, &c, 1);
}

void	hexbase(unsigned char c)
{
	char	*str;

	str = "0123456789abcdef";
	tba3(str[c / 16]);
	tba3(str[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	x;

	i = 0;
	while (str[i])
	{
		x = str[i];
		if (x < 32 || x > 126)
		{
			write(1, "\\", 1);
			hexbase(x);
		}
		else
		{
			tba3(x);
		}
		i++;
	}
}
