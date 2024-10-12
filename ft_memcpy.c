/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:18:51 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/09 00:16:11 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (dest);
	s = (void *)src;
	d = (void *)dest;
	i = 0;
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (d);
}

/*int	main(void)
{
	char	dest1[] = "destino";
	char	src1[] = "fuente";
	int	c = 8;
	printf("%s", (unsigned char *)ft_memcpy(dest1,src1,c));
	return (0);
}*/
