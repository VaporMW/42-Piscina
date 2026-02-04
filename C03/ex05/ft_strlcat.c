/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:55:05 by marcde-c          #+#    #+#             */
/*   Updated: 2026/02/03 14:43:41 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
// {
// 	unsigned int	i;
// 	unsigned int	j;
// 	unsigned int	destl;
// 	unsigned int	srcl;

// 	destl = 0;
// 	while (dest[destl] != '\0' && destl < size)
// 		destl++;
// 	srcl = 0;
// 	while (src[srcl] != '\0')
// 		srcl++;
// 	if (size < destl)
// 		return (size + srcl);
// 	i = destl;
// 	j = 0;
// 	while (src[j] != '\0' && (i + 1) < size)
// 	{
// 		dest[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	dest[i] = '\0';
// 	return (destl + srcl);
// }

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	char	buffer[100];
// 	char	*ptr_return;
// 	int		i;

// 	if (argc != 3)
// 		return (1);
// 	i = 0;
// 	while (argv[1][i])
// 	{
// 		buffer[i] = argv[1][i];
// 		i++;
// 	}
// 	buffer[i] = '\0';
// 	printf("Antes %s \n", buffer);
// 	ptr_return = ft_strcat(buffer, argv[2]);
// 	printf("Depois %s \n", buffer);
// }