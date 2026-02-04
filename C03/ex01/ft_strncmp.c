/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:16:23 by marcde-c          #+#    #+#             */
/*   Updated: 2026/02/03 11:24:12 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int argc, char **argv)
// {
// 	int				result;
// 	unsigned int	n;

// 	if (argc != 4)
// 		return (1);
// 	n = atoi(argv[3]);
// 	result = ft_strncmp(argv[1], argv[2], n);
// 	printf("Comparando: %s e %s de tamanho %d\n", argv[1], argv[2], n);
// 	printf("Retorno: %d\n", result);
// 	if (result == 0)
// 		printf("Resultados iguais!");
// 	else
// 		printf("Resultados diferentes!");
// 	return (0);
// }