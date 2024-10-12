/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:30:52 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/09 01:52:18 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	if (size <= j)
	{
		j = size;
		return (size + ft_strlen(src));
	}
	while (src[i] && (size - j - 1) > i)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (j + ft_strlen(src));
}

/*int	main(void)
{
	char	dst1[50] = "destino";
	char	src1[50] = "fuente";
	size_t	a = 7;
	printf("%zu",ft_strlcat(dst1,src1,a));
	return (0);
}*/