/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:31:54 by marcde-c          #+#    #+#             */
/*   Updated: 2026/01/29 11:37:37 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	condition(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_str_is_alpha(char *str)
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
// int main(void)
// {
// 	printf("Primeiro String: %d\n", ft_str_is_alpha("olaa3124 mibos"));
// 	printf("Segundo String: %d\n", ft_str_is_alpha("olaamibos"));
// 	printf("Terceiro String: %d\n", ft_str_is_alpha("olaa amibos"));
// 	printf("Terceiro String: %d\n", ft_str_is_alpha(""));
// 	return (0);
// }
