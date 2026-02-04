/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:36:22 by marcde-c          #+#    #+#             */
/*   Updated: 2026/01/28 13:40:02 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	condition(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
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
// 	printf("Primeiro String: %d\n", ft_str_is_uppercase("olaa3124 mibos"));
// 	printf("Segundo String: %d\n", ft_str_is_uppercase("olaamibos"));
// 	printf("Terceiro String: %d\n", ft_str_is_uppercase("olaa amibos"));
// 	printf("Quarto String: %d\n", ft_str_is_uppercase("OLAABIBOS"));
// 	printf("Quinto String: %d\n", ft_str_is_uppercase(""));
// 	return (0);
// }
