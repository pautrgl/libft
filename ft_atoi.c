/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:04:16 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/08 21:40:36 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	j;

	i = 0;
	sign = 1;
	j = 0;
	while (nptr[i] == 9 || nptr[i] == 10 || nptr[i] == 11 || nptr[i] == 12
		|| nptr[i] == 13 || nptr[i] == 32)
		i++;
	if ((nptr[i] == 45) || (nptr[i] == 43))
	{
		if (nptr[i] == 45)
			sign = -1;
		i++;
	}
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		j = (10 * j) + (nptr[i] - 48);
		i++;
	}
	return (j * sign);
}

/*int	main(void)
{
	char	e[] = "9999999";
	printf("%d",ft_atoi(e));
	return (0);
}*/