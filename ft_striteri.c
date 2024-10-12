/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:31:14 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/08 16:10:27 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	*ft_patatas_fritas(unsigned int c, char* s)
{
	while(s[c])
	{
		write(1, &s[c], 1);
		c++;
	}
	return (0);
}

int	main(void)
{
	char a[] = "patatas fritas";
	char b[] = "patatas frita";
	ft_striteri(a, ft_patatas_fritas(0, b));
	return (0);
}*/
