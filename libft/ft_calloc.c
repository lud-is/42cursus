/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumetral <lumetral@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:15:00 by lumetral          #+#    #+#             */
/*   Updated: 2024/06/24 14:20:39 by lumetral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* 	Standard C Library
*	#include <stdlib.h>
*
*	The calloc() function allocates memory. The allocated memory
*	is aligned such that it can be used for any data type.
*
*	The calloc() function contiguously allocates enough space for
*	count objects that are size bytes of memory each and returns a
*	pointer to the allocated memory. The allocated memory is filled
*	with bytes of value zero.
*/

#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	while (i < count * size)
	{
		((unsigned char *)ptr)[i] = '\0';
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	size_t	count;
	size_t	size;
	int		*array;
	size_t	i;

	count = 10;
	size = sizeof(int);
	array = ft_calloc(count, size);
	//array = calloc(count, size);
	if (array == NULL)
		return (1);
	i = 0;
	while (i < count)
	{
		printf("array[%zu]: %d\n", i, array[i]);
		i++;
	}
	free(array);
	return (0);
}*/
