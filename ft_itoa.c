/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:39:10 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/08 16:17:43 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n, int i)
{
	int	temp;

	temp = n;
	if (n <= 0)
		i++;
	while (temp != 0)
	{
		temp = temp / 10;
		i++;
	}
	return (i);
}

static void	ft_exceptions(int n, int i, char *str)
{
	if (n == 0)
		str[i] = 48;
	if (n == -2147483648)
	{
		str[0] = '-';
		str[i--] = '8';
		n = (n + 8) / -10;
		while (n > 0)
		{
			str[i--] = n % 10 + 48;
			n = n / 10;
		}
	}
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = 0;
	i = ft_length(n, i);
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0 && n != -2147483648)
	{
		str[0] = '-';
		n = -n;
	}
	str[i--] = '\0';
	ft_exceptions(n, i, str);
	while (n > 0)
	{
		str[i--] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}

/*int	main(void)
{
	int	a = 1;
	char	*b = ft_itoa(a);
	if (ft_itoa(a) != NULL)
		printf("%s", b);
	else
		printf("%s", "error");
	free(b);
	return (0);
}*/
