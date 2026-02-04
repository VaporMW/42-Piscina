/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 09:18:56 by marcde-c          #+#    #+#             */
/*   Updated: 2026/02/03 19:04:23 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	int	result;

	if (argc != 3)
		return (1);
	result = ft_strcmp(argv[1], argv[2]);
	printf("Comparando: %s e %s \n", argv[1], argv[2]);
	printf("Retorno: %d\n", result);
	if (result == 0)
		printf("Resultados iguais!");
	else
		printf("Resultados diferentes!");
	return (0);
}
