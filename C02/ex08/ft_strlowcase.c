/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:25:01 by marcde-c          #+#    #+#             */
/*   Updated: 2026/01/28 14:34:21 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_uppercase(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str1[] = "A AMIZADE E UM PAIS";
// 	char	str2[] = "DA EUROPA";

// 	printf("Conversão 1: %s \n", ft_strlowcase(str1));
// 	printf("Conversão 2:%s \n", ft_strlowcase(str2));
// 	return (0);
// }
