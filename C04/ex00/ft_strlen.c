/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:03:20 by marcde-c          #+#    #+#             */
/*   Updated: 2026/02/03 18:14:04 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	int	count;

// 	if (argc != 2)
// 		return (1);
// 	printf("Contador de caracteres:\n");
// 	ft_strlen(argv[1]);
// 	count = ft_strlen(argv[1]);
// 	printf("A palavra '%s' tem %d caracteres!\n", argv[1], count);
// 	return (0);
// }
