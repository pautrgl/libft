/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:38:33 by ptrapero          #+#    #+#             */
/*   Updated: 2024/09/19 21:17:14 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*t;

	t = (unsigned char *)s;
	while (n > 0)
	{
		*t = (unsigned char)c;
		t++;
		n--;
	}
	return (s);
}

/*int	main(void)
{
	char c[5]="hola";
	ft_memset(c,'r',3);
	printf("%s", c);
	return (0);
}*/