/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 20:40:36 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/09 21:16:59 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*conc;

	i = 0;
	j = 0;
	conc = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (conc == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		conc[j] = s1[j];
		j++;
	}
	while (s2[i] != '\0')
	{
		conc[j] = s2[i];
		i++;
		j++;
	}
	conc[j] = '\0';
	return (conc);
}

/*int	main(void)
{
	char	*a = "patatas ";
	char	*e = "con ketchup";
	char	*o = ft_strjoin(a,e);
	printf ("%s", o);
	free(o);
	return (0);
}*/
