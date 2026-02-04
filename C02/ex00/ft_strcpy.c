/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:18:01 by marcde-c          #+#    #+#             */
/*   Updated: 2026/02/02 13:40:34 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	origin[] = "A amizade é um país da Europa";
	char	destiny[60];

	printf("Original: %s \n", origin);
	ft_strcpy(destiny, origin);
	printf("Cópia: %s \n", destiny);
}
