/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:24:16 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/11 19:13:52 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (len > i && big[i] != '\0')
	{
		j = 0;
		while ((big[i + j] == little[j] && len > (i + j)) && (little[j]
				!= '\0' && big[i + j] != '\0'))
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	b[] = "hola busco lola a 1234567890";
	char	l[] = "lola";
	int	a = 15;
	printf("%s", ft_strnstr(b,l,a));
	return (0);
}*/
