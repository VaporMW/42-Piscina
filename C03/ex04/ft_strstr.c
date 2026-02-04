/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:20:27 by marcde-c          #+#    #+#             */
/*   Updated: 2026/02/03 14:42:07 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	char	*resultado;

// 	if (argc != 3)
// 		return (0);
// 	resultado = ft_strstr(argv[1], argv[2]);
// 	if (resultado)
// 		printf("Encontrado: '%s' - Dentro de '%s'\n", resultado, argv[1]);
// 	else
// 		printf("Nao encontrado.\n");
// 	return (0);
// }