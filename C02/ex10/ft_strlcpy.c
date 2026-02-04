/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:27:34 by marcde-c          #+#    #+#             */
/*   Updated: 2026/02/02 13:54:57 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	comp;

	comp = 0;
	while (src[comp] != '\0')
	{
		comp++;
	}
	if (size == 0)
		return (comp);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (comp);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	origin[] = "A amizade e um país da Europa";
	char	destiny[10];
	unsigned int		size;

	size = ft_strlcpy(destiny, origin, 10);
	printf("Dest: %s\n", destiny);
	printf("Tamanho original: %u\n", size);
	printf(" ");
}
