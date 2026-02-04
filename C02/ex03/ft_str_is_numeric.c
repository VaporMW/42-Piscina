/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:16:38 by marcde-c          #+#    #+#             */
/*   Updated: 2026/01/28 14:07:54 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	condition(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
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
// 	printf("Primeiro String: %d\n", ft_str_is_numeric("olaa3124 mibos"));
// 	printf("Segundo String: %d\n", ft_str_is_numeric("olaamibos"));
// 	printf("Terceiro String: %d\n", ft_str_is_numeric("olaa amibos"));
// 	printf("Quarto String: %d\n", ft_str_is_numeric("1234"));
// 	printf("Quinto String: %d\n", ft_str_is_numeric(""));
// 	return (0);
// }
