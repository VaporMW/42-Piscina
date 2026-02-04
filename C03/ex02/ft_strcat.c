/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:28:10 by marcde-c          #+#    #+#             */
/*   Updated: 2026/02/03 14:42:20 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

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