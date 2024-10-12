/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:21:04 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/09 21:13:58 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;
	size_t			i;

	t = (void *)s;
	i = 0;
	while (n > i)
	{
		if (t[i] == (unsigned char)c)
			return (&t[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	a[] = "hola";
	int	b = 'a';
	size_t	c = 5;
	printf("%s", (unsigned char*)ft_memchr(a,b,c));
	return (0);
}*/