/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:03:26 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/09 02:17:00 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*r;
	unsigned char	*t;
	size_t			i;

	r = (void *)s1;
	t = (void *)s2;
	i = 0;
	while (n > i)
	{
		if (r[i] != t[i])
			return (r[i] - t[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	a[] = "hola lola";
	char	b[] = "hola lolb";
	int	c = 17;
	printf("%d",ft_memcmp(a,b,c));
	return (0);
}*/