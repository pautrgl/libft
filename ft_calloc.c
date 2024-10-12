/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:27:36 by ptrapero          #+#    #+#             */
/*   Updated: 2024/09/27 21:27:28 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = malloc(sizeof(char) * size * nmemb);
	if (mem == NULL)
		return (NULL);
	mem = ft_bzero(mem, size * nmemb);
	return (mem);
}

/*int	main(void)
{
	size_t	c = 4;
	size_t	n = 5;
	char *a = ft_calloc(c,n);
	printf("%s", a);
	free(a);
	return (0);
}*/
