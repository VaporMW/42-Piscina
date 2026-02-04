/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:51:04 by marcde-c          #+#    #+#             */
/*   Updated: 2026/01/28 18:18:56 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowercase(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str1[] = "olaa amibos";
// 	char	str2[] = "helpraepp";

// 	printf("Conversão 1: %s\n", ft_strupcase(str1));
// 	printf("Conversão 2: %s\n", ft_strupcase(str2));
// 	return (0);

// }
