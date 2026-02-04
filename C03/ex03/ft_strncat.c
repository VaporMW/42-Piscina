/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:22:24 by marcde-c          #+#    #+#             */
/*   Updated: 2026/02/03 14:42:14 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int argc, char **argv)
// {
// 	char	buffer[7];
// 	int		nb;
// 	int		i;

// 	if (argc != 4)
// 		return (1);
// 	i = 0;
// 	while (argv[1][i])
// 	{
// 		buffer[i] = argv[1][i];
// 		i++;
// 	}
// 	buffer[i] = '\0';
// 	nb = atoi(argv[3]);
// 	printf("Antes %s \n", buffer);
// 	ft_strncat(buffer, argv[2], nb);
// 	printf("Depois %s \n", buffer);
// 	printf("o atoi do pai é %d \n", nb);
// 	return (0);
// }
