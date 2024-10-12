/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:55:27 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/08 16:14:16 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trim;

	i = 0;
	j = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = (ft_strlen(s1));
	while (j > 0 && ft_strchr(set, s1[j]))
		j--;
	if (j < i)
		trim = ft_strdup("");
	else
		trim = ft_substr(s1, i, j - i + 1);
	return (trim);
}

/*int	main(void)
{
	char	*a = "ghjk hola busco a lolagh jk";
	char	*b = " ghjk";
	char	*c = ft_strtrim(a,b);
	printf("%s", c);
	free (c);
	return (0);
}*/
