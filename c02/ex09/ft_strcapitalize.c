/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:31:17 by acennadi          #+#    #+#             */
/*   Updated: 2024/07/01 14:26:28 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && 'Z' >= str[i])
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (x == 0)
			{
				str[i] = str[i] - 32;
				x = 1;
			}
		}
		else if ('0' <= str[i] && str[i] <= '9')
			x = 1;
		else
			x = 0;
		i++;
	}
	return (str);
}
