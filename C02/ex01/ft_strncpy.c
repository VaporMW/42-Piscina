/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:41:15 by marcde-c          #+#    #+#             */
/*   Updated: 2026/02/02 17:08:58 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	origin[] = "A amizade é um país da Europa";
// 	char	destiny[5];

// 	printf("Original: %s \n", origin);
// 	ft_strncpy(destiny, origin, 10);
// 	printf("Cópia limitada: %s \n", destiny);
// }
