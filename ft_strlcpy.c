/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:56:03 by ptrapero          #+#    #+#             */
/*   Updated: 2024/09/25 16:02:39 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while ((size - 1) > i && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*int	main(void)
{
	char	dst1[] = "hola";
	char	src1[] = "adios";
	char	dst2[] = "hola";
	char	src2[] = "adios";
	size_t	a = 4;
	printf("%d\n", strlcpy(dst1,src1,a));
	printf("%zu", ft_strlcpy(dst2,src2,a));
	printf("\ndst1 es: %s\n", dst1);
	printf("\ndst2 es: %s\n", dst2);
	return (0);
}*/