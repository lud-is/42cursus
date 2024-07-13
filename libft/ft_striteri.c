/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:23:57 by lumetral          #+#    #+#             */
/*   Updated: 2024/07/08 19:06:17 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

/*void	f(unsigned int i, char *s)
{
	s[i] = s[i] + i + 1;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	s[] = "Hola";

	ft_striteri(s, f);
	printf("%s\n", s);
	return (0);
}*/
