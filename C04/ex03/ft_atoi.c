/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:46:03 by marcde-c          #+#    #+#             */
/*   Updated: 2026/02/03 14:49:57 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	signal;

	i = 0;
	result = 0;
	signal = 1;
	while (str[i] == ' ' || (str[i] <= 13 && str[i] >= 9))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * signal);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	int	result;

// 	printf("Entrada: %s\n", argv[1]);
// 	result = ft_atoi(argv[1]);
// 	printf("Saída: %d\n", result);
// 	return (0);
// }