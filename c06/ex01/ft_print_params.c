/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 00:37:04 by acennadi          #+#    #+#             */
/*   Updated: 2024/07/09 00:37:05 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	a;

	i = 1;
	while (argc > i)
	{
		a = 0;
		while (argv[i][a])
		{
			write(1, &argv[i][a], 1);
			a++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
