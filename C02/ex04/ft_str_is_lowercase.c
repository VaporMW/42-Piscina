/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:26:38 by marcde-c          #+#    #+#             */
/*   Updated: 2026/01/28 13:41:21 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	condition(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!condition(str[i]))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	printf("Primeiro String: %d\n", ft_str_is_lowercase("olaa3124 mibos"));
// 	printf("Segundo String: %d\n", ft_str_is_lowercase("olaamibos"));
// 	printf("Terceiro String: %d\n", ft_str_is_lowercase("olaa amibos"));
// 	printf("Quarto String: %d\n", ft_str_is_lowercase("olaAmigos"));
// 	printf("Quinto String: %d\n", ft_str_is_lowercase(""));
// 	return (0);
// }
