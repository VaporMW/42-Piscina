/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:08:52 by marcde-c          #+#    #+#             */
/*   Updated: 2026/01/27 09:00:30 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
// #include <stdio.h>
// int	main(void)
// {

// 	char s[] = "A amizade é um País da Europa!";

// 	printf("Este texto abaixo tem: %d caracteres! \n", ft_strlen(s));
// 	printf("Texto: %s\n", s);
// 	return (0);
// }
