/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:46:40 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/09 21:25:02 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*t;

	t = (unsigned char *)s;
	while (n > 0)
	{
		*t = 0;
		t++;
		n--;
	}
	return (s);
}

/*int	main(void)
{
	char c[] = "hola";
	ft_bzero(c,3);
	printf("%s", c);
	return (0);
}*/
