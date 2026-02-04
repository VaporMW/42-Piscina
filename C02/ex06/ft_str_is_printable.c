/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:44:16 by marcde-c          #+#    #+#             */
/*   Updated: 2026/01/28 13:49:23 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	condition(char c)
{
	return (c >= 32 && c <= 126);
}

int	ft_str_is_printable(char *str)
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
// 	printf("Primeiro String: %d\n", ft_str_is_printable("olaa3124 mibos"));
// 	printf("Segundo String: %d\n", ft_str_is_printable("olaamibos"));
// 	printf("Terceiro String: %d\n", ft_str_is_printable("olaa amibos"));
// 	printf("Quarto String: %d\n", ft_str_is_printable("OLAABIBOS"));
// 	printf("Quinto String: %d\n", ft_str_is_printable(""));
// 	return (0);
// }
