/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:35:16 by marcde-c          #+#    #+#             */
/*   Updated: 2026/02/02 13:52:01 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_num_or_letter(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_num_or_letter(str[i - 1]))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char text[] = "hi, how are you? 42words forty-two; fifty+and+one";
	char text2[] = "A amizade Éee um pais da Europa";
	char text3[] = "Faustoo Pentelho  oo o  o oOOOo!!";
	printf("text: %s\n", text);
	printf("Conversão: %s\n", ft_strcapitalize(text));
	printf("\n");
	printf("text: %s\n", text2);
	printf("Conversão 2: %s\n", ft_strcapitalize(text2));
	printf("\n");
	printf("text: %s\n", text3);
	printf("Conversão 3: %s\n", ft_strcapitalize(text3));
}
