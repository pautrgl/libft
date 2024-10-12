/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:26:49 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/09 19:38:22 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	if (dest <= src)
	{
		while (n--)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (n--)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	dest1[100] = "bbbbbbbb";
	char	src1[100] = "aaaaa";
	int	c = 4;
	printf("%s", (unsigned char *)ft_memmove(dest1,src1,c));
	return (0);
}*/