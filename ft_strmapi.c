/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:13:21 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/08 16:59:48 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mapi;

	i = 0;
	mapi = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (mapi == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}

/*char	*ketchup(unsigned int j, char r)
{
	while (r[j])
	{
		r[j] -= 32;
		j++;
	}
	return (r);
}

int	main(void)
{
	char	a[] = "ketchuppp";
	ft_strmapi(a, ketchup(0,a));
	return (0);
}*/