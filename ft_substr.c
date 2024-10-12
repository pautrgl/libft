/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 01:26:40 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/08 18:57:02 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup (""));
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	i = 0;
	sub = malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	while (len > i)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

/*int	main(void)
{
	char	a[] = "me gustan las patatas con ketchup";
	unsigned int b = 10;
	size_t	c = 40;
	char *d = ft_substr(a,b,c);
	printf("%s", d);
	free(d);
	return (0);
}*/